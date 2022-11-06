<<<<<<< HEAD
#include "Personnel.h"

Personnel::Personnel(Type* type, int health, int damage): Entity(type, health, damage) {}

void Personnel::takeDamage(int damage) {
	setHealth(getHealth() - damage);
}

void Personnel::dealDamage(Entity* entity) {
	entity->takeDamage(getDamage());
}
=======
#include "Personnel.h"

Personnel::Personnel(Type* type, int health, int damage): Entity(type, health, damage) {}

void Personnel::takeDamage(int damage) {
	setHealth(getHealth() - damage);
}

void Personnel::dealDamage(Entity* entity) {
	entity->takeDamage(getDamage());
}

Entity* Personnel::clone() {
	return new Personnel(this->getType()->clone(), this->getHealth(), this->getDamage());
}