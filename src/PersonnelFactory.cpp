#include "PersonnelFactory.h"
#include "Personnel.h"
#include <iostream>

PersonnelFactory::PersonnelFactory(Type* type, AddOn* addOn): Factory(type, addOn) {}

Entity* PersonnelFactory::createEntity(Alliance* alliance) {
	Personnel* p = new Personnel(getType()->clone());
	p->setAlliance(alliance);
	if (getAddOn() != NULL) {
		AddOn* personnelAddOn = getAddOn()->clone();
		personnelAddOn->setEntity(p);
		return personnelAddOn;
	} else {
		return p;
	}
}

Factory* PersonnelFactory::clone() {
	return new PersonnelFactory(getType(), getAddOn());
}
