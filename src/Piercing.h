#ifndef PIERCING_H
#define PIERCING_H

class Piercing : AddOn {


public:
	Piercing(Entity* entity, int value);

	void takeDamage(int damage);

	void dealDamage(Entity* entity);
};

#endif
