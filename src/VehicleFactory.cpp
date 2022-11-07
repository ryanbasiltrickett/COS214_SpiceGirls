#include "VehicleFactory.h"
#include "Vehicle.h"

VehicleFactory::VehicleFactory(Type* type, AddOn* addOn): Factory(type, addOn) {}

Entity* VehicleFactory::createEntity(Alliance* alliance) {
	Vehicle* v = new Vehicle(getType()->clone());
	v->setAlliance(alliance);
	if (getAddOn() != NULL) {
		AddOn* personnelAddOn = getAddOn()->clone();
		personnelAddOn->setEntity(v);
		return personnelAddOn;
	} else {
		return v;
	}
}

Factory* VehicleFactory::clone() {
	return new VehicleFactory(getType()->clone(), getAddOn()->clone());
}
