#include "Vehicle.h"

Vehicle::Vehicle(Type* type, int health, int damage): Entity(type, health, damage) {}

void Vehicle::takeDamage(int damage) {
	setHealth(getHealth() - damage);
}

void Vehicle::dealDamage(Entity* entity) {
	entity->takeDamage(getDamage());
}
