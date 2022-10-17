#ifndef AQUATICTYPE_H
#define AQUATICTYPE_H
#include "Type.h"
#include <string>

class AquaticType : public Type {


public:
	AquaticType();

	std::string getTypeDesc();
};

#endif
