#include "Factory.h"

Factory::Factory() {
	// TODO - implement Factory::Factory
	throw "Not yet implemented";
}

Type* Factory::getType() {
	return this->type;
}

void Factory::setType(Type* type) {
	this->type = type;
}

addOn* Factory::getAddOns() {
	return this->addOns;
}

void Factory::setAddOns(addOn* addOns) {
	this->addOns = addOns;
}
