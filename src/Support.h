#ifndef SUPPORT_H
#define SUPPORT_H

class Support : Entity {


public:
	/**
	 * @brief Instantiates the support
	 * 
	 * @param type must be a Type*
	 */
	Support();

	/**
	 * @brief Removes health from the support object
	 * 
	 * Preconditions:
	 *  - damage must be an int
	 *
	 * Postconditions:
	 *  - Reduces the health of the support object
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
