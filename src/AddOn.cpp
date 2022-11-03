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