#include "Armour.h"

Armour::Armour() : AddOn() {	
}

void Armour::takeDamage(int damage) {
	if (value > 0) {
		value -= damage;
	} else {
		entity->takeDamage(damage);
	}
}

void Armour::dealDamage(Entity* entity) {
	this->entity->dealDamage(entity);
}

AddOn* Armour::clone() {
	Armour* armour = new Armour();
	armour->setValue(value);
	return armour;
}
