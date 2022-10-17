#ifndef SUPPORT_H
#define SUPPORT_H
#include "Entity.h"
class Support : public Entity {


public:
	Support();

	void dealDamage(Entity* entity);
};

#endif
