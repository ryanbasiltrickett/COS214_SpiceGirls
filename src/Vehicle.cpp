#include "Vehicle.h"
#include "RoundStats.h"

Vehicle::Vehicle(Type* type, int health, int damage): Entity(type, health, damage) {}

void Vehicle::takeDamage(int damage) {
	setHealth(getHealth() - damage);
}

void Vehicle::dealDamage(Entity* entity) {
	RoundStats::damageDone += getDamage();
	entity->takeDamage(getDamage());
}

Entity* Vehicle::clone() {
	Vehicle* v;
	if (this->getType() == NULL) {
		v = new Vehicle(NULL, this->getHealth(), this->getDamage());
	} else {
		v = new Vehicle(this->getType()->clone(), this->getHealth(), this->getDamage());
	}

	v->setAlliance(this->getAlliance());

	return v;
}