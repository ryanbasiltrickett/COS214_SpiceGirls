<<<<<<< HEAD
#include "Personnel.h"

Personnel::Personnel(Type* type, int health, int damage): Entity(type, health, damage) {}

void Personnel::takeDamage(int damage) {
	setHealth(getHealth() - damage);
}

void Personnel::dealDamage(Entity* entity) {
	entity->takeDamage(getDamage());
}
<<<<<<< HEAD
=======
#include "Personnel.h"

Personnel::Personnel(Type* type, int health, int damage): Entity(type, health, damage) {}

void Personnel::takeDamage(int damage) {
	setHealth(getHealth() - damage);
}

void Personnel::dealDamage(Entity* entity) {
	entity->takeDamage(getDamage());
}
=======
>>>>>>> 7be49738cebc0ced3357f2ce74f6fda2ea0b3d5e

Entity* Personnel::clone() {
	return new Personnel(this->getType()->clone(), this->getHealth(), this->getDamage());
}