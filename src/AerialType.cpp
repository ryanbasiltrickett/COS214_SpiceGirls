#include "AerialType.h"

AerialType::AerialType() {}

string AerialType::getTypeDesc() {
	return "Aerial";
}

Type* AerialType::clone() {
	return new AerialType();
}
