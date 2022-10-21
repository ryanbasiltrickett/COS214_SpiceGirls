#ifndef SUPPORTFACTORY_H
#define SUPPORTFACTORY_H

#include "Factory.h"

/**
 * @brief SupportFactory class
 * 
 * Used to instantiate Support objects.
 */
class SupportFactory : Factory {

public:
	/**
	 * @brief Instantiates the support factory
	 */
	SupportFactory(Type* type, AddOn* addOn);

	/**
	 * @brief Instantiates and returns a support for the given alliance
	 *
	 * Preconditions:
	 *  - alliance must be an Alliance*
	 *
	 * Postconditions:
	 *  - Returns the instantiated support object with specific state
	 *
	 * @param alliance must be a Alliance*
	 * @return Entity* The instatiated support
	 */
	Entity* createEntity(Alliance* alliance);

	/**
	 * @brief Instantiates and returns a clone of the current support factory
	 *
	 * Postconditions:
	 *  - Returns the clone of the current support factory
	 *
	 * @return Factory* The support factory clone
	 */
	Factory* clone();
};

#endif
