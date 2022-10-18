#ifndef CLOUDY_H
#define CLOUDY_H
#include "Weather.h"
#include "KeyPoint.h"
#include <string>

class Cloudy : public Weather {


public:
	Cloudy();

	virtual void handleChange(KeyPoint* k) = 0;

	virtual std::string getWeather() = 0;
};

#endif
