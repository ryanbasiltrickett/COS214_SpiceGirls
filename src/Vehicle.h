#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle : Entity {


public:
	Vehicle();

	void takeDamage(int damage);

	void dealDamage(Entity* entity);
};

#endif
