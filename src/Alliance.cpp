#include "Alliance.h"
#include <time.h>

int Alliance::totalNum = 0;

Alliance::Alliance() {
	this->active = 1;
	this->aID = totalNum++;
	srand(time(0));
}

Alliance::~Alliance() {
	
	this->negotiator->removeAlliance(this);

	if (totalNum == 1)
		delete this->negotiator;
	
}

void Alliance::setNegotiator(Negotiator* negotiator) {
	this->negotiator = negotiator;
}

void Alliance::addCountry(Country* nation) {
	members.push_back(nation);
}

bool Alliance::considerPeace(int id) {
	return (rand() % 2 == 0);
}

void Alliance::addFactory(Factory* factory) {
	production.push_back(factory);
}

void Alliance::surrender() {
	this->active = 2; //Number 2 means that Alliance has surrendered

	this->negotiator->removeAlliance(this);
}

int Alliance::getID() {
	return this->aID;
}

bool Alliance::offPeace() {

	if (this->negotiator->sendPeace(aID)) //Send the peace deal to all the alliances fighting against
	{
		this->active = 3; //Number 3 means that Alliance chose to peacefully pull out of war
		return true;
	}
	
	return false; 
}

Alliance* Alliance::clone() {
	
	throw "Not yet implemented";
}
