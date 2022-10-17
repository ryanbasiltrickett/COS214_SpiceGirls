#ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H

class VehicleFactory : Factory {


public:
	VehicleFactory();

	Vehicle* createEntity(Alliance* alliance);

	Factory* clone();
};

#endif
