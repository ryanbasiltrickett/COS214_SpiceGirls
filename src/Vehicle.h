#ifndef VEHICLE_H
#define VEHICLE_H

#include "Entity.h"

/**
 * @brief Vehicle class
 * 
 * Used to add addtional functionality to Entity objects.
 */
class Vehicle : public Entity {

public:
	/**
	 * @brief Instantiates the vehicle
	 * 
	 * @param health must be an int
	 * @param damage must be an int
	 * @param type must be a Type*
	 */
	Vehicle(Type* type, int health = 500, int damage = 10);

	/**
	 * @brief Removes health from the vehicle object
	 * 
	 * Preconditions:
	 *  - damage must be an int
	 *
	 * Postconditions:
	 *  - Reduces the health of the vehicle object
	 * 
	 * @param damage must be an int
	 * @return void
	 */
	void takeDamage(int damage);

	/**
	 * @brief Inflicts damage onto another entity
	 * 
	 * Preconditions:
	 *  - entity must be an Entity*
	 *
	 * Postconditions:
	 *  - Reduces the health of the entity
	 * 
	 * @param entity must be an Entity*
	 * @return void
	 */
	void dealDamage(Entity* entity);
};

#endif
