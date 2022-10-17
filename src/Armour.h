#ifndef ARMOUR_H
#define ARMOUR_H
#include "AddOn.h"
#include "Entity.h"

class Armour : public AddOn {


public:
	Armour(Entity* entity, int value);

	void takeDamage(int damage);

	void dealDamage(Entity* entity);
};

#endif
