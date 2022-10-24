#include "KeyPoint.h"
using namespace std;

KeyPoint::KeyPoint(string AreaType): AreaType(AreaType) {
	
}

bool KeyPoint::isKeyPoint() {
	// TODO - implement KeyPoint::isKeyPoint
	throw "Not yet implemented";
}

void KeyPoint::attack(Alliance* alliance) {
	// TODO - implement KeyPoint::attack
	throw "Not yet implemented";
}

void KeyPoint::moveEntities(Area* area, Alliance* alliance) {
	// TODO - implement KeyPoint::moveEntities
	throw "Not yet implemented";
}

void KeyPoint::addEntity(Entity* entity) {
	// TODO - implement KeyPoint::addEntity
	throw "Not yet implemented";
}

void KeyPoint::attach(CommandCenter* comCenter) {
	// TODO - implement KeyPoint::attach
	throw "Not yet implemented";
}

void KeyPoint::detach(CommandCenter* comCenter) {
	// TODO - implement KeyPoint::detach
	throw "Not yet implemented";
}

void KeyPoint::notify() {
	// TODO - implement KeyPoint::notify
	throw "Not yet implemented";
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

string KeyPoint::getAresType() const{
	return this->AreaType;
}
