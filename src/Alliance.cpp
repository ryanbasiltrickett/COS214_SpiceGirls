#include "Alliance.h"
#include "Negotiator.h"
#include "Entity.h"
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

vector<Entity*> Alliance::getReserveEntities(int number) {
	vector<Entity*> out;
	for (int i = 0; i < number && i < reserveEntities.size(); i++) {
		out.push_back(reserveEntities[i]);
		reserveEntities.erase(reserveEntities.begin() + i);
	}

	return out;
}	

void Alliance::addReserveEntity(Entity* entity) {
	reserveEntities.push_back(entity);
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

bool Alliance::offerPeace() {

	if (this->negotiator->sendPeace(this)) //Send the peace deal to all the alliances fighting against
	{
		this->active = 3; //Number 3 means that Alliance chose to peacefully pull out of war
		return true;
	}
	
	return false; 
}

int Alliance::getActive() {
	return active;
}

Alliance* Alliance::clone() {
	
	throw "Not yet implemented";
}
