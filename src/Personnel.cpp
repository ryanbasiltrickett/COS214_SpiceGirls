#include "Personnel.h"
#include "RoundStats.h"
#include <iostream>
#include <stdexcept>

Personnel::Personnel(Type* type, int health, int damage): Entity(type, health, damage) {}

void Personnel::takeDamage(int damage) {
	if (damage <= 0)
		throw std::invalid_argument("damage must be greater than zero");

	setHealth(getHealth() - damage);
}

void Personnel::dealDamage(Entity* entity) {
	RoundStats::damageDone += getDamage();
	entity->takeDamage(getDamage());
}

Entity* Personnel::clone() {
	Personnel* p;
	if (this->getType() == NULL) {
		p = new Personnel(NULL, this->getHealth(), this->getDamage());
	} else {
		p = new Personnel(this->getType()->clone(), this->getHealth(), this->getDamage());
	}

	p->setAlliance(this->getAlliance());

	return p;
}