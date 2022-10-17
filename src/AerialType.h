#ifndef AERIALTYPE_H
#define AERIALTYPE_H
#include "Type.h"
#include <string>

class AerialType : public Type {


public:
	AerialType();

	std::string getTypeDesc();
};

#endif
