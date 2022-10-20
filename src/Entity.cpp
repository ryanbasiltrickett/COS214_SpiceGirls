#include "Entity.h"

Entity::Entity(Type* type) {
	// TODO - implement Entity::Entity
	throw "Not yet implemented";
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
