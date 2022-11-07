#ifndef PERSONNEL_H
#define PERSONNEL_H

#include "Entity.h"

/**
 * @brief Personnel class
 * 
 * Used to add addtional functionality to Entity objects.
 */
class Personnel : public Entity {

public:
	/**
	 * @brief Instantiates the Personnel
	 * 
	 * @param health must be an int
	 * @param damage must be an int
	 * @param type must be a Type*
	 */
	Personnel(Type* type, int health = 100, int damage = 10);

	/**
	 * @brief Removes health from the Personnel object
	 * 
	 * Preconditions:
	 *  - damage must be an int
	 *
	 * Postconditions:
	 *  - Reduces the health of the Personnel object
	 * 
	 * Exception:
	 * - damage less than 0
	 * 
	 * @param damage must be an int and greater than 0
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

	/**
	 * @brief Clones the current Entity object and returns the cloned object
	 * 
	 * PostConditions:
	 * - Returns the cloned object of Entity
	 * 
	 * @return Entity* The cloned object
	 */
	Entity* clone();
};

#endif