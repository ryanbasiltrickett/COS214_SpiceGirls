<<<<<<< HEAD
#include "PersonnelFactory.h"
#include "Personnel.h"

PersonnelFactory::PersonnelFactory(Type* type, AddOn* addOn): Factory(type, addOn) {}

Entity* PersonnelFactory::createEntity(Alliance* alliance) {
	Personnel* p = new Personnel(getType()->clone());
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
=======
#include "PersonnelFactory.h"
#include "Personnel.h"

PersonnelFactory::PersonnelFactory(Type* type, AddOn* addOn): Factory(type, addOn) {}

Entity* PersonnelFactory::createEntity(Alliance* alliance) {
	Personnel* p = new Personnel(getType()->clone());
	if (getAddOn() != NULL) {
		AddOn* personnelAddOn = getAddOn()->clone();
		personnelAddOn->setEntity(p);
		return personnelAddOn;
	} else {
		return p;
	}
}

Factory* PersonnelFactory::clone() {
	return new PersonnelFactory(getType()->clone(), getAddOn()->clone());
}
>>>>>>> 7be49738cebc0ced3357f2ce74f6fda2ea0b3d5e
