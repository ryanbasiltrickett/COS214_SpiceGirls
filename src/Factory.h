#ifndef FACTORY_H
#define FACTORY_H

/**
 * @brief Factory class
 * 
 * Used to instantiate Entity objects.
 */
class Factory {

private:
	Type* type;
	addOn* addOns;

public:
	/**
	 * @brief Instantiates the factory
	 */
	Factory();

	/**
	 * @brief Destroys the factory object
	 *
	 * Postconditions:
	 *  - All dynamic memory should be deallocated from the factory object
	 */
	void ~Factory();

	virtual Entity* createEntity(Alliance* alliance) = 0;

	
	/**
	 * @brief Returns factories type state
	 *
	 * Postconditions:
	 *  - Returns the type
	 *
	 * @return Type* The type state of the factory object
	 */
	Type* getType();

	
	/**
	 * @brief Sets the factories type state
	 *
	 * Preconditions:
	 *  - type must be an Type*
	 *
	 * Postconditions:
	 *  - Sets the type state of the factory object
	 *
	 * @param type must be a Type*
	 * @return void
	 */
	void setType(Type* type);

	
	/**
	 * @brief Returns factories add ons
	 *
	 * Postconditions:
	 *  - Returns the add ons of the factory
	 *
	 * @return AddOn* The decorators for the factory object
	 */
	AddOn* getAddOns();

	/**
	 * @brief Sets the factories add ons
	 *
	 * Preconditions:
	 *  - addOns must be an AddOn*
	 *
	 * Postconditions:
	 *  - Sets the add ons of the factory object
	 *
	 * @param addOns must be a AddOn*
	 * @return void
	 */
	void setAddOns(AddOn* addOns);

	virtual Factory* clone() = 0;
};

#endif
