#include "Armour.h"

Armour::Armour(Entity* entity, int value) {
	this->entity = entity;
	this->value = value;
}

void Armour::takeDamage(int damage) {
	if (value > 0) {
		value -= damage;
	} else {
		entity->takeDamage(damage);
	}
}

void Armour::dealDamage(Entity* entity) {
	return;
}
