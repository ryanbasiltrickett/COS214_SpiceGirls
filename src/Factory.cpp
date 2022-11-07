#include "Factory.h"

Factory::Factory(Type* type, AddOn* addOn) {
	this->type = type;
	this->addOn = addOn;
}

Factory::~Factory() {
	delete type;
	delete addOn;
}

Type* Factory::getType() {
	return this->type;
}

void Factory::setType(Type* type) {
	this->type = type;
}

AddOn* Factory::getAddOn() {
	return this->addOn;
}

void Factory::setAddOns(AddOn* addOn) {
	this->addOn = addOn;
}
