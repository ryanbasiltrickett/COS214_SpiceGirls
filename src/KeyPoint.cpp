#include "KeyPoint.h"
#include "Weather.h"
#include "RoundStats.h"
#include "Sunny.h"
#include <time.h>
#include <cstdlib>
#include <iostream>

using namespace std;

KeyPoint::KeyPoint(string areaName): Area(areaName) {
	weather = new Sunny();
}

KeyPoint::KeyPoint(KeyPoint& keyPoint): Area(keyPoint.getAreaName()) {
	for (int i = 0; i < keyPoint.entities.size(); i++)
		this->addEntity(keyPoint.entities[i]->clone());

	weather = keyPoint.weather->clone();
}

KeyPoint::~KeyPoint() {
	for (int i = 0; i < entities.size(); i++)
		delete entities[i];

	for (int i = 0; i < generals.size(); i++)
		delete generals[i];

	delete weather;
}

bool KeyPoint::isKeyPoint() {
	return true;
}

void KeyPoint::simulateBattle(Alliance* alliance) {
	int numUnits = 0;
	for (int i = 0; i < entities.size(); i++) {
		if (entities[i]->getAlliance() == alliance) {
			numUnits++;
		}
	}

	if (numUnits != entities.size()) {
		for (int i = 0; i < entities.size(); i++) {
			if (entities[i]->getAlliance() == alliance) {
				int random;
				do {
					random = rand() % entities.size();
				} while (entities[random]->getAlliance() == alliance);

				if (rand() % (int)(weather->getMultiplier() * 100) <= (int)(weather->getMultiplier() * 100))
					entities[i]->dealDamage(entities[random]);
			}
		}
	}
	
	clearBattlefield(alliance);
}

void KeyPoint::clearBattlefield(Alliance* alliance) {
	int destroyed = 0;
	double numUnits = 0;
	for (vector<Entity*>::iterator it = entities.begin();  it != entities.end(); ++it) {
		if ((*it)->getHealth() <= 0) {
			destroyed++;
			for (int i = 0; i < generals.size(); i++) {
				if (generals[i]->getAlliance() == (*it)->getAlliance()) {
					generals[i]->initiateStrategy(this);
					delete *it;
					entities.erase(it);
				}
			}
		} else if ((*it)->getAlliance() == alliance) {
			numUnits++;
		}
	}

	// saving stats
	string stats = getAreaName() + ":\n";
	stats += "Key Point Satus: ";
	if (numUnits / entities.size() >= 0.6) {
		stats += "Winning\n";
	} else if (numUnits / entities.size() >= 0.35) {
		stats += "Contested\n";
	} else {
		stats += "Losing\n";
	}
	stats += "Number of Entities Destroyed by Alliance: " + to_string(destroyed);

	RoundStats::keyPointInformation.push_back(stats);
	RoundStats::numEntitiesDestroyed += destroyed;
}

void KeyPoint::moveEntitiesInto(Alliance* alliance, int numTroops) {
	vector<Entity*> troops = alliance->getReserveEntities(numTroops);
	for (int i = 0; i < troops.size(); i++)
		entities.push_back(troops[i]);
}

void KeyPoint::moveEntitiesOutOf(Alliance* alliance, int numTroops) {
	vector<Entity*>::iterator it = entities.begin();
	for (int i = 0; i < numTroops && it != entities.end(); i++) {
		for (; it != entities.end(); ++it) {
			if ((*it)->getAlliance() == alliance) {
				alliance->addReserveEntity(*it);
				entities.erase(it);
			}
		}
	}
}

void KeyPoint::addEntity(Entity* entity) {
	entities.push_back(entity);
}

void KeyPoint::addGeneral(General* general) {
	generals.push_back(general);
}

void KeyPoint::removeGeneral(General* general) {
	for (vector<General*>::iterator it = generals.begin();  it != generals.end(); ++it) {
		if (*it == general) {
			delete *it;
			generals.erase(it);
			return;
		}
	}
}

Area* KeyPoint::clone() {
	return new KeyPoint(*this);
}

void KeyPoint::setWeather(Weather* weather) {
	delete this->weather;
	this->weather = weather;
}

void KeyPoint::changeWeather() {

	srand(time(0));

	int randomNum = 1 + (rand() % 10);
	std::string currWeather = this->weather->getWeather();

	if (currWeather == "Sunny" && randomNum > 6) // 60% chance of not changing weather from Sunny and staying
		this->weather->handleChange(this);
	else if (currWeather == "Cloudy" && randomNum > 3) // 30% chance of not changing weather from Cloudy and staying
		this->weather->handleChange(this);
	else if (currWeather == "Rainy" && randomNum > 1) // 10% chance of not changing weather from Rainy and staying
		this->weather->handleChange(this);
	

}

std::string KeyPoint::getWeather() const {
	return this->weather->getWeather();
}
