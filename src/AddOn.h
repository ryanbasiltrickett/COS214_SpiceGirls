#ifndef ADDON_H
#define ADDON_H
#include "Entity.h"

/**
 * @brief AddOn class
 * 
 * Used to add addtional functionality to Entity objects.
 */
class AddOn : public Entity {

protected:
	int value;
	Entity* entity;

public:
	/**
	 * @brief Instantiates an AddOn
	 * 
	 * @param value must be an int
	 */
	AddOn(int value);

	/**
	 * @brief Sets the AddOn's value attribute
	 *
	 * Preconditions:
	 *  - value must be an int
	 *
	 * Postconditions:
	 *  - Sets the value attribute of the AddOn object to the passed in value
	 *
	 * @param value must be an int
	 * @return void
	 */
	void setValue(int value);

	/**
	 * @brief Returns the AddOn's value attribute
	 *
	 * Postconditions:
	 *  - Returns the value attribute of the AddOn object
	 * 
	 * @return int The values of the AddOn
	 */
	int getValue();

	/**
	 * @brief Sets the AddOn's entity attribute
	 *
	 * Preconditions:
	 *  - entity must be an Entity*
	 *
	 * Postconditions:
	 *  - Sets the entity attribute of the AddOn object to the passed in entity
	 *
	 * @param entity must be an Entity*
	 * @return void
	 */
	void setEntity(Entity* entity);

	/**
	 * @brief Returns the AddOn's entity attribute
	 *
	 * Postconditions:
	 *  - Returns the entity attribute of the AddOn object
	 *
	 * @return Entity* The entity of the AddOn
	 */
	Entity* getEntity();
	
	virtual void takeDamage(int damage) = 0;

	virtual void dealDamage(Entity* entity) = 0;
  
	virtual AddOn* clone() = 0;
};

#endif
