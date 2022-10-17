#ifndef ENTITY_H
#define ENTITY_H
#include "Type.h"
#include "Alliance.h"

class Entity {

private:
	Type* type;
	Alliance* alliance;
	int health;

public:
	Entity(Type* type);

	Type* getType();

	void setType(Type* type);

	Alliance* getAlliance();

	void setAlliance(Alliance* alliance);

	int getHealth();

	void setHealth(int health);

	virtual void takeDamage(int damage) = 0;

	virtual void dealDamage(Entity* entity) = 0;
};

#endif
