#include "KeyPoint.h"
#include <time.h>
#include <cstdlib>

using namespace std;

KeyPoint::KeyPoint(string areaName): Area(areaName) {}

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
	for (int i = 0; i < entities.size(); i++) {
		if (entities[i]->getAlliance() == alliance) {
			int random;
			do {
				random = rand() % entities.size();
			} while (entities[random]->getAlliance() == alliance);

			entities[i]->dealDamage(entities[random]);
		}
	}
}

void KeyPoint::clearBattlefield() {
	for (vector<Entity*>::iterator it = entities.begin();  it != entities.end(); ++it) {
		if ((*it)->getHealth() <= 0) {
			for (int i = 0; i < generals.size(); i++) {
				if (generals[i]->getAlliance() == (*it)->getAlliance()) {
					generals[i]->initiateStrategy(this);
					delete *it;
					entities.erase(it);
				}
			}
		}
	}
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
	// TODO - implement KeyPoint::clone
	throw "Not yet implemented";
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
