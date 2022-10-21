#ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H
#include "Factory.h"

/**
 * @brief VehicleFactory class
 * 
 * Used to instantiate Vehicle objects.
 */
class VehicleFactory : public Factory {

public:
	/**
	 * @brief Instantiates the vehicle factory
	 * 
	 * @param type must be a Type*
	 * @param addOn must be a AddOn*
	 */
	VehicleFactory(Type* type, AddOn* addOn);

	/**
	 * @brief Instantiates and returns a vehicle for the given alliance
	 *
	 * Preconditions:
	 *  - alliance must be an Alliance*
	 *
	 * Postconditions:
	 *  - Returns the instantiated vehicle object with specific state
	 *
	 * @param alliance must be a Alliance*
	 * @return Vehicle* The instatiated vehicle
	 */
	Entity* createEntity(Alliance* alliance);

	/**
	 * @brief Instantiates and returns a clone of the current vehicle factory
	 *
	 * Postconditions:
	 *  - Returns the clone of the current vehicle factory
	 *
	 * @return Factory* The vehicle factory clone
	 */
	Factory* clone();
};

#endif
