#include "AddOn.h"

AddOn::AddOn(int value): Entity() {
	this->value = value;
	entity = NULL;
}

void AddOn::setValue(int value) {
	this->value = value;
}

int AddOn::getValue() {
	return value;
}

void AddOn::setEntity(Entity* entity) {
	this->entity = entity;
}

Entity* AddOn::getEntity() {
	return this->entity;
}

Type* AddOn::getType() {
	return entity->getType();
}

void AddOn::setType(Type* type) {
	entity->setType(type);
}

Alliance* AddOn::getAlliance() {
	return entity->getAlliance();
}

void AddOn::setAlliance(Alliance* alliance) {
	entity->setAlliance(alliance);
}

int AddOn::getHealth() {
	return entity->getHealth();
}

void AddOn::setHealth(int health) {
	entity->setHealth(health);
}

int AddOn::getDamage() {
	return entity->getDamage();
}

void AddOn::setDamage(int damage) {
	entity->setDamage(damage);
}