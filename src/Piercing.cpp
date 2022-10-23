#include "Piercing.h"
#include "Entity.h"

Piercing::Piercing(Entity* entity, int value) {
	this->entity = entity;
	this->value = value;
}

void Piercing::takeDamage(int damage) {
	return;
}

void Piercing::dealDamage(Entity* entity) {
	int sumValue = this->entity->getDamage() + value;
	entity->takeDamage(sumValue);
}
