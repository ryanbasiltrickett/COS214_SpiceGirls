#include "Support.h"

Support::Support(Type* type, int health, int damage): Entity(type, health, damage) {}

void Support::dealDamage(Entity* entity) {
	entity->takeDamage(getDamage());
}

void Support::takeDamage(int damage) {
	this->setHealth(this->getHealth() - damage);
}

Entity* Support::clone() {
	return new Support(this->getType()->clone(), this->getHealth(), this->getDamage());
}