#ifndef PIERCING_H
#define PIERCING_H
#include "AddOn.h"
#include "Entity.h"

/**
 * @brief Piercing class
 * 
 * Used to add to the damage Entity objects inflict.
 */
class Piercing : public AddOn {


public:
	/**
	 * @brief Instantiates an Piercing
	 * 
	 * @param value must be an int
	 */
	Piercing(int value);

	/**
	 * @brief Decreases the entities' armour value (or health when their armour has depleted)
	 *
	 * Preconditions:
	 *  - damage must be an int
	 *
	 * Postconditions:
	 *  - Does nothing
	 *
	 * @param damage must be an int
	 * @return void
	 */
	void takeDamage(int damage);

	/**
	 * @brief Adds to the damage Entity objects inflict.
	 *
	 * Preconditions:
	 *  - entity must be an Entity*
	 *
	 * Postconditions:
	 *  - Inflicts damage to passed in Entity objects using the sum of it's value and the entity onto which it has been added's value 
	 *
	 * @param entity must be an Entity*
	 * @return void
	 */
	void dealDamage(Entity* entity);

	/**
	 * @brief Instantiates and returns a clone of the current Piercing
	 *
	 * Postconditions:
	 *  - Returns the clone of the current Piercing
	 *
	 * @return Piercing* The Piercing clone
	 */
	AddOn* clone();
};

#endif
