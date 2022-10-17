#ifndef PERSONALFACTORY_H
#define PERSONALFACTORY_H

class PersonalFactory : Factory {


public:
	/**
	 * @brief Instantiates the personal factory
	 */
	PersonalFactory();

	/**
	 * @brief Instantiates and returns a personal for the given alliance
	 *
	 * Preconditions:
	 *  - alliance must be an Alliance*
	 *
	 * Postconditions:
	 *  - Returns the instantiated personal object with specific state
	 *
	 * @param alliance must be a Alliance*
	 * @return Personal* The instatiated personal
	 */
	Personal* createEntity(Alliance* alliance);

	/**
	 * @brief Instantiates and returns a clone of the current personal factory
	 *
	 * Postconditions:
	 *  - Returns the clone of the current personal factory
	 *
	 * @return Factory* The personal factory clone
	 */
	Factory* clone();
};

#endif
