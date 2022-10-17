#ifndef PERSONNEL_H
#define PERSONNEL_H
#include "Entity.h"

class Personnel : public Entity {


public:
	Personnel();

	void takeDamage(int damage);

	void dealDamage(Entity* entity);
};

#endif
