#ifndef PERSONAL_H
#define PERSONAL_H

class Personal : Entity {


public:
	Personal();

	void takeDamage(int damage);

	void dealDamage(Entity* entity);
};

#endif
