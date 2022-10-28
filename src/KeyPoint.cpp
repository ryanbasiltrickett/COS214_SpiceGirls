#include "KeyPoint.h"
using namespace std;

<<<<<<< HEAD
KeyPoint::KeyPoint(string AreaType): AreaType(AreaType) {
	
}
=======
KeyPoint::KeyPoint(): Area() {}
>>>>>>> a4295e93de29acc2a81d07b2501bf4500def6f80

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
