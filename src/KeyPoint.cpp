#include "KeyPoint.h"
#include <time.h>
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