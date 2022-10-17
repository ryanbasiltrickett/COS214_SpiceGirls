#ifndef RAINY_H
#define RAINY_H
#include "Weather.h"
#include "KeyPoint.h"

class Rainy : public Weather {


public:
	Rainy();

	virtual std::string getWeather() = 0;

	virtual void handleChange(KeyPoint* k) = 0;
};

#endif
