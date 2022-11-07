#include "Support.h"
#include "RoundStats.h"
#include <stdexcept>

Support::Support(Type* type, int health, int damage): Entity(type, health, damage) {}

void Support::dealDamage(Entity* entity) {
	RoundStats::damageDone += getDamage();
	entity->takeDamage(getDamage());
}

void Support::takeDamage(int damage) {
	if (damage <= 0)
		throw std::invalid_argument("damage must be greater than zero");

	this->setHealth(this->getHealth() - damage);
}

Entity* Support::clone() {
	Support* s;
	if (this->getType() == NULL) {
		s = new Support(NULL, this->getHealth(), this->getDamage());
	} else {
		s = new Support(this->getType()->clone(), this->getHealth(), this->getDamage());
	}

	s->setAlliance(this->getAlliance());

	return s;
}