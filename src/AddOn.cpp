#include "AddOn.h"

AddOn::AddOn() {
	value = 0;
	entity = NULL;
}

void AddOn::setValue(int value) {
	this->value = value;
}

void AddOn::setEntity(Entity* entity) {
	this->entity = entity;
}
