#include "Personnel.h"
#include "RoundStats.h"
#include <iostream>

Personnel::Personnel(Type* type, int health, int damage): Entity(type, health, damage) {}

void Personnel::takeDamage(int damage) {
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