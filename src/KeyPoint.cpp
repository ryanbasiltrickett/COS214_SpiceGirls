#include "KeyPoint.h"

KeyPoint::KeyPoint() {
	// TODO - implement KeyPoint::KeyPoint
	throw "Not yet implemented";
}

bool KeyPoint::isKeyPoint() {
	return true;
}

void KeyPoint::simulateBattle(Alliance* alliance) {
	// TODO - implement KeyPoint::attack
	throw "Not yet implemented";
}

void KeyPoint::clearBattlefield() {
	// TODO - implement KeyPoint::attack
	throw "Not yet implemented";
}

void KeyPoint::moveEntities(Area* area, Alliance* alliance) {
	// TODO - implement KeyPoint::moveEntities
	throw "Not yet implemented";
}

void KeyPoint::addEntity(Entity* entity) {
	entities.push_back(entity);
}

void KeyPoint::attach(CommandCenter* comCenter) {
	comCenters.push_back(comCenter);
}

void KeyPoint::detach(CommandCenter* comCenter) {
	
	for (int i = 0; i < comCenters.size(); i++) {
		if (comCenters[i] == comCenter) {
			delete comCenter;
			comCenters.erase()
		}
	}
}

void KeyPoint::notify() {
	// TODO - implement KeyPoint::notify
	throw "Not yet implemented";
}

Area* KeyPoint::clone() {
	// TODO - implement KeyPoint::clone
	throw "Not yet implemented";
}
