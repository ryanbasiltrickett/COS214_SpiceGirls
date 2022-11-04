#include "SupportFactory.h"
#include "Support.h"

SupportFactory::SupportFactory(Type* type, AddOn* addOn): Factory(type, addOn) {}

Entity* SupportFactory::createEntity(Alliance* alliance) {
	Support* s = new Support(getType()->clone());
	if (getAddOn() != NULL) {
		AddOn* personnelAddOn = getAddOn()->clone();
		personnelAddOn->setEntity(s);
		return personnelAddOn;
	} else {
		return s;
	}
}

Factory* SupportFactory::clone() {
	return new SupportFactory(getType()->clone(), getAddOn()->clone());
}
