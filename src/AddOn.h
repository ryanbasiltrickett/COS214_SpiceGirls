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
	 */
	AddOn();

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
	
	virtual void takeDamage(int damage) = 0;

	virtual void dealDamage(Entity* entity) = 0;
<<<<<<< HEAD
	
=======

	virtual AddOn* clone() = 0;
>>>>>>> f804840ea0e9704e8c223c7ca67e69bb88a06ca0
};

#endif
