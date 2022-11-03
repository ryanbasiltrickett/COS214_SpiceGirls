#include "AquaticType.h"

using namespace std;

AquaticType::AquaticType() {}

string AquaticType::getTypeDesc() {
	return "Aquatic";
}

Type* AquaticType::clone() {
	return new AquaticType();
}
