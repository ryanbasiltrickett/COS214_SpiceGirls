#include "Alliance.h"
#include <time.h>

int Alliance::totalNum = 0;

Alliance::Alliance() {
	
	this->active = true;
	this->aID = totalNum++;
	srand(time(0));
}

void Alliance::setNegotiator(Negotiator* n) {
	this->negotiator = n;
}

void Alliance::addCountry(Country* nation) {
	members.push_back(nation);
}

bool Alliance::considerPeace(int id) {
	return (rand() % 2 == 0);
}

void Alliance::addFactory(Factory* f) {
	production.push_back(f);
}

void Alliance::surrender() {
	this->active =false;

	this->negotiator->removeAlliance(aID);
}

int Alliance::getID() {
	return this->aID;
}

bool Alliance::offPeace() {

	if (this->negotiator->sendPeace(aID)) //Send the peace deal to all the alliances fighting against
	{
		this->active =false;
		return true;
	}
	
	return false; 
}

Alliance* Alliance::clone() {
	// TODO - implement Alliance::clone
	throw "Not yet implemented";
}
