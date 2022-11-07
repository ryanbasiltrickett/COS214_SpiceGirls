#ifndef ARMOUR_H
#define ARMOUR_H
#include "AddOn.h"
#include "Entity.h"

/**
 * @brief Armour class
 * 
 * Used to add protective armour to Entity objects.
 */
class Armour : public AddOn {


public:
	/**
	 * @brief Instantiates an Armour
	 * 
	 * @param value must be an int
	 */
	Armour(int value);
	
	/**
	 * @brief Decreases the entities' armour value (or health when their armour has depleted)
	 *
	 * Preconditions:
	 *  - damage must be an int
	 *
	 * Postconditions:
	 *  - Decreases the entities' armour value (or health when their armour has diminished) by the passed in value
	 *
	 * Exceptions:
	 *  - damage less 0
	 * 
	 * @param damage must be an int and is greater than 0
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
	 *  - Does nothing
	 *
	 * @param entity must be an Entity*
	 * @return void
	 */
	void dealDamage(Entity* entity);

	/**
	 * @brief Instantiates and returns a clone of the current Armour
	 *
	 * Postconditions:
	 *  - Returns the clone of the current Armour
	 *
	 * @return Armour* The Armour clone
	 */
	AddOn* clone();
};

#endif
