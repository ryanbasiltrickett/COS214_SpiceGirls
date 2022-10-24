#include "Armour.h"

Armour::Armour(Entity* entity, int value) {
	// TODO - implement Armour::Armour
	throw "Not yet implemented";
}

void Armour::takeDamage(int damage) {
	if (value > 0) {
		value -= damage;
	} else {
		entity->takeDamage(damage);
	}
}

void Armour::dealDamage(Entity* entity) {
	// TODO - implement Armour::dealDamage
	throw "Not yet implemented";
}
