#ifndef ADDON_H
#define ADDON_H

class AddOn : Entity {

protected:
	int value;
	Entity* entity;

public:
	AddOn(Entity* entity, int value);

	virtual void takeDamage(int damage) = 0;

	virtual void dealDamage(Entity* entity) = 0;
};

#endif
