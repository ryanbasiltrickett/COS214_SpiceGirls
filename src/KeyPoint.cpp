#include "KeyPoint.h"
#include <cstdlib>

using namespace std;

KeyPoint::KeyPoint(string areaName): Area(areaName) {}

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
			delete *it;
			entities.erase(it);
			// TODO - notify comCenter
			throw "Not yet implemented";
		}
	}
}

void KeyPoint::moveEntitiesInto(Alliance* alliance, int numTroops) {
	
	for (int i = 0; i < numTroops; i++) {
		try {
			entities.push_back(alliance->retrieveEntity());
		} catch (...) {
			break;
		}
	}
}

void KeyPoint::moveEntitiesOutOf(Alliance* alliance, int numTroops) {
	vector<Entity*>::iterator it = entities.begin();
	for (int i = 0; i < numTroops && it != entities.end(); i++) {
		for (; it != entities.end(); ++it) {
			if ((*it)->getAlliance() == alliance) {
				alliance->addEntity(*it);
				entities.erase(it);
			}
		}
	}
}

void KeyPoint::addEntity(Entity* entity) {
	entities.push_back(entity);
}

void KeyPoint::attach(CommandCenter* comCenter) {
	comCenters.push_back(comCenter);
}

void KeyPoint::detach(CommandCenter* comCenter) {
	for (vector<CommandCenter*>::iterator it = comCenters.begin();  it != comCenters.end(); ++it) {
		if (*it == comCenter) {
			delete comCenter;
			comCenters.erase(it);
			return;
		}
	}
}

Area* KeyPoint::clone() {
	
	KeyPoint* keyPointClone = new KeyPoint();
	keyPointClone->setWeather(this->weather);

	for(int i = 0; i < this->entities.size(); ++i)
		keyPointClone->addEntity(this->entities[i]);

	for(int i = 0; this->comCenters.size(); ++i)
		keyPointClone->attach(this->comCenters[i]);

	return keyPointClone;
}

string KeyPoint::getAreaType() const{
	return this->AreaType;
}

std::string KeyPoint::getAreaName() const {
	
	 return this->areaName;
}
