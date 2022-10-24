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
	 * @param entity must be a Entity*
	 * @param value must be a int
	 */
	AddOn(Entity* entity, int value);
	
	virtual void takeDamage(int damage) = 0;

	virtual void dealDamage(Entity* entity) = 0;
	
};

#endif
