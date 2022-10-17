#ifndef ARMOUR_H
#define ARMOUR_H

class Armour : AddOn {


public:
	Armour(Entity* entity, int value);

	void takeDamage(int damage);

	void dealDamage(Entity* entity);
};

#endif
