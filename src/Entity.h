#ifndef ENTITY_H
#define ENTITY_H

#include "Type.h"

class Alliance;

/**
 * @brief Entity class
 * 
 * Used to simulate war entity objects.
 */
class Entity {

private:
	Type* type;
	Alliance* alliance;
	int health;
	int damage;

public:
	/**
	 * @brief Instantiates the entity
	 */
	Entity();

	/**
	 * @brief Instantiates the entity
	 * 
	 * @param type must be a Type*
	 */
	Entity(Type* type, int health, int damage);

	/**
	 * @brief Returns entities type state
	 *
	 * Postconditions:
	 *  - Returns the type
	 *
	 * @return Type* The type state of the entity object
	 */
	virtual Type* getType();

	/**
	 * @brief Sets the entities type state
	 *
	 * Preconditions:
	 *  - type must be an Type*
	 *
	 * Postconditions:
	 *  - Sets the type state of the entity object
	 *
	 * @param type must be a Type*
	 * @return void
	 */
	virtual void setType(Type* type);

	/**
	 * @brief Returns entities alliance
	 *
	 * Postconditions:
	 *  - Returns the alliance
	 *
	 * @return Type* The alliance of the entity object
	 */
	virtual Alliance* getAlliance();

	/**
	 * @brief Sets the entities alliance
	 *
	 * Preconditions:
	 *  - alliance must be an Alliance*
	 *
	 * Postconditions:
	 *  - Sets the alliance of the entity object
	 *
	 * @param alliance must be a Alliance*
	 * @return void
	 */
	virtual void setAlliance(Alliance* alliance);

	/**
	 * @brief Returns entities health
	 *
	 * Postconditions:
	 *  - Returns the health
	 *
	 * @return int The health of the entity object
	 */
	virtual int getHealth();

	/**
	 * @brief Sets the entities health
	 *
	 * Preconditions:
	 *  - health must be an int
	 *
	 * Postconditions:
	 *  - Sets the health of the entity object
	 *
	 * @param health must be an int
	 * @return void
	 */
	virtual void setHealth(int health);

	/**
	 * @brief Returns entities damage
	 *
	 * Postconditions:
	 *  - Returns the damage
	 *
	 * @return int The damage of the entity object
	 */
	virtual int getDamage();

	/**
	 * @brief Sets the entities damage
	 *
	 * Preconditions:
	 *  - damage must be an int
	 *
	 * Postconditions:
	 *  - Sets the damage of the entity object
	 *
	 * @param damage must be an int
	 * @return void
	 */
	virtual void setDamage(int damage);

	virtual void takeDamage(int damage) = 0;

	virtual void dealDamage(Entity* entity) = 0;

	virtual Entity* clone() = 0;
};

#endif
