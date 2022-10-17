#ifndef SUPPORTFACTORY_H
#define SUPPORTFACTORY_H

class SupportFactory : Factory {


public:
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
	 * @brief Instantiates and returns a clone of the current Support factory
	 *
	 * Postconditions:
	 *  - Returns the clone of the current Support factory
	 *
	 * @return Factory* The Support factory clone
	 */
	Factory* clone();
};

#endif
