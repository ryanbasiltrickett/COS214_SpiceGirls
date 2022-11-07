#ifndef FACTORY_H
#define FACTORY_H

#include "Type.h"
#include "AddOn.h"

/**
 * @brief Factory class
 * 
 * Used to instantiate Entity objects.
 */
class Factory {

private:
	Type* type;
	AddOn* addOn;

public:
	/**
	 * @brief Instantiates the factory
	 * 
	 * @param type must be a Type*
	 * @param addOn must be a AddOn*
	 */
	Factory(Type* type, AddOn* addOn);

	/**
	 * @brief Destroys the factory object
	 *
	 * Postconditions:
	 *  - All dynamic memory should be deallocated from the factory object
	 */
	~Factory();

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
	AddOn* getAddOn();

	/**
	 * @brief Sets the factories add ons
	 *
	 * Preconditions:
	 *  - addOns must be an AddOn*
	 *
	 * Postconditions:
	 *  - Sets the add ons of the factory object
	 *
	 * @param addOn must be a AddOn*
	 * @return void
	 */
	void setAddOns(AddOn* addOn);

	/**
	 * @brief the factoru object will be cloned and returned
	 * 
	 * PostConditions:
	 * - returns the cloned object of type Factory*
	 * 
	 * @return Factory* the cloned object
	 */
	virtual Factory* clone() = 0;
};

#endif
