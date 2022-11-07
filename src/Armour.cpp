#include "Armour.h"
#include <stdexcept>  

Armour::Armour(int value) : AddOn(value) {}

void Armour::takeDamage(int damage) {

	if (damage <= 0)
		throw std::invalid_argument("damage must be greater than zero");
	
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
	Armour* armour = new Armour(value);
	if (getEntity() != NULL)
		armour->setEntity(entity->clone());
	return armour;
}
