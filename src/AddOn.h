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

	/**
	 * @brief Returns entities type state
	 *
	 * Postconditions:
	 *  - Returns the type
	 *
	 * @return Type* The type state of the entity object
	 */
	Type* getType();

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
	void setType(Type* type);

	/**
	 * @brief Returns entities alliance
	 *
	 * Postconditions:
	 *  - Returns the alliance
	 *
	 * @return Type* The alliance of the entity object
	 */
	Alliance* getAlliance();

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
	void setAlliance(Alliance* alliance);

	/**
	 * @brief Returns entities health
	 *
	 * Postconditions:
	 *  - Returns the health
	 *
	 * @return int The health of the entity object
	 */
	int getHealth();

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
	void setHealth(int health);

	/**
	 * @brief Returns entities damage
	 *
	 * Postconditions:
	 *  - Returns the damage
	 *
	 * @return int The damage of the entity object
	 */
	int getDamage();

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
	void setDamage(int damage);

	/**
	 * @brief Reduces health from the Entity object
	 * 
	 * Preconditions:
	 *  - damage must be an int
	 *
	 * Postconditions:
	 *  - Reduces the health of the Entity object
	 * 
	 * @param damage must be an int
	 * @return void
	 */
	virtual void takeDamage(int damage) = 0;

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
	virtual void dealDamage(Entity* entity) = 0;
  
  /**
   * @brief Clones the AddOn's object and returns the the cloned object
   * 
   * PostConditions:
   * - The returns the cloned object of AddOn object
   * 
   * @return AddOn*  the return object
   */
	virtual AddOn* clone() = 0;
};

#endif
