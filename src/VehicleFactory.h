#ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H

class VehicleFactory : Factory {


public:
	/**
	 * @brief Instantiates the vehicle factory
	 */
	VehicleFactory();

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
	Vehicle* createEntity(Alliance* alliance);

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
