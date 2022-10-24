#include "Piercing.h"

Piercing::Piercing() : AddOn() {	
}

void Piercing::takeDamage(int damage) {
	return;
}

void Piercing::dealDamage(Entity* entity) {
	int sumValue = this->entity->getDamage() + value;
	entity->takeDamage(sumValue);
}

AddOn* Piercing::clone() {
	Piercing* piercing = new Piercing();
	Piercing->setValue(value);
	return piercing;
}
