#include "Alliance.h"

Alliance::Alliance() {
	// TODO - implement Alliance::Alliance
	
}

void Alliance::setNegotiator(Negotiator* n) {
	this->negotiator = n;
}

bool Alliance::addCountry(Country* nation) {

	this->members.push_back(nation);
}

bool Alliance::considerPeace(int id) {
	// TODO - implement Alliance::considerPeace
	throw "Not yet implemented";
}

void Alliance::addFactory(Factory* f) {
	
	this->production.push_back(f);
}

void Alliance::surrender(){

	this->active = false;
}

int Alliance::getID() {
	return this->aID;
}

bool Alliance::offPeace() {
	// TODO - implement Alliance::offPeace
	throw "Not yet implemented";
}

Alliance* Alliance::clone() {
	
	Alliance* allianceClone = new Alliance();

	allianceClone->setID(this->aID);
	allianceClone->setActiveStatus(this->active);
	allianceClone->setNegotiator(this->negotiator);

	for(int i = 0; i < this->production.size(); ++i)
		allianceClone->addFactory(this->production[i]);

	for(int i = 0; i < this->members.size(); ++i)
		allianceClone->addCountry(this->members[i]);

	return allianceClone;
}
