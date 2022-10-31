#include "AddOn.h"

AddOn::AddOn(int value) {
	this->value = value;
	entity = NULL;
}

void AddOn::setValue(int value) {
	this->value = value;
}

void AddOn::setEntity(Entity* entity) {
	this->entity = entity;
}
