#ifndef SUPPORT_H
#define SUPPORT_H

#include "Entity.h"

/**
 * @brief Support class
 * 
 * Used to add addtional functionality to Entity objects.
 */
class Support : public Entity {

public:
	/**
	 * @brief Instantiates the support
	 * 
	 * @param health must be an int
	 * @param damage must be an int
	 * @param type must be a Type*
	 */
	Support(Type* type, int health = 1000, int damage = 30);

	/**
	 * @brief Removes health from the support object
	 * 
	 * Preconditions:
	 *  - damage must be an int
	 *
	 * Postconditions:
	 *  - Reduces the health of the support object
	 * 
	 * Exceptions:
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
	 * @brief Returns the clone of the Support object
	 * 
	 * @return Entity* The clone of the support object
	 */
	Entity* clone();
};

#endif
