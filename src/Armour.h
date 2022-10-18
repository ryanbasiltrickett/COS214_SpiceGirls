#ifndef ARMOUR_H
#define ARMOUR_H

/**
 * @brief Armour class
 * 
 * Used to add protective armour to Entity objects.
 */
class Armour : AddOn {


public:
	/**
	 * @brief Instantiates an Armour
	 * 
	 * @param entity must be a Entity*
	 * @param value must be a int
	 */
	Armour(Entity* entity, int value);
	
	/**
	 * @brief Decreases the entities' armour value (or health when their armour has depleted)
	 *
	 * Preconditions:
	 *  - damage must be an int
	 *
	 * Postconditions:
	 *  - Decreases the entities' armour value (or health when their armour has diminished) by the passed in value
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
	 *  - Does nothing
	 *
	 * @param entity must be an Entity*
	 * @return void
	 */
	void dealDamage(Entity* entity);
};

#endif
