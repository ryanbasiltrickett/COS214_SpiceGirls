#include "Piercing.h"
#include "RoundStats.h"

Piercing::Piercing(int value) : AddOn(value) {}

void Piercing::takeDamage(int damage) {
	entity->takeDamage(damage);
}

void Piercing::dealDamage(Entity* entity) {
	int sumValue = this->entity->getDamage() + value;
	entity->takeDamage(sumValue);
	RoundStats::damageDone += sumValue;
}

AddOn* Piercing::clone() {
	Piercing* piercing = new Piercing(value);
	if (getEntity() != NULL)
		piercing->setEntity(entity->clone());
	return piercing;
}
