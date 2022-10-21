#include "Entity.h"

Entity::Entity(Type* type, int health, int damage) {
	this->health = health;
	this->damage = damage;
	this->type = type;
}

Type* Entity::getType() {
	return this->type;
}

void Entity::setType(Type* type) {
	this->type = type;
}

Alliance* Entity::getAlliance() {
	return this->alliance;
}

void Entity::setAlliance(Alliance* alliance) {
	this->alliance = alliance;
}

int Entity::getHealth() {
	return this->health;
}

void Entity::setHealth(int health) {
	this->health = health;
}

int Entity::getDamage() {
	return this->damage;
}

void Entity::setDamage(int damage) {
	this->damage = damage;
}
