#include "KeyPoint.h"

KeyPoint::KeyPoint(string areaName): Area(areaName) {
}

bool KeyPoint::isKeyPoint() {
	return true;
}

void KeyPoint::simulateBattle(Alliance* alliance) {
	// TODO - implement KeyPoint::attack
	throw "Not yet implemented";
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
	// TODO - implement KeyPoint::moveEntitiesInto
	throw "Not yet implemented";
}

void KeyPoint::moveEntitiesOutOf(Alliance* alliance, int numTroops) {
	// TODO - implement KeyPoint::moveEntitiesOutOf
	throw "Not yet implemented";
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
	// TODO - implement KeyPoint::clone
	throw "Not yet implemented";
}

std::string KeyPoint::getAreaName() const {
	
	 return this->areaName;
}
