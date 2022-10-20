#ifndef SUPPORTFACTORY_H
#define SUPPORTFACTORY_H

class SupportFactory : Factory {


public:
	/**
	 * @brief Instantiates the support factory
	 */
	SupportFactory();

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
	 * @return Support* The instatiated support
	 */
	Support* createEntity(Alliance* alliance);

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
