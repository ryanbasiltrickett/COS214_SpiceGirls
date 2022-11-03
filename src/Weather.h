#ifndef WEATHER_H
#define WEATHER_H
#include <string>

class KeyPoint;

class Weather {


public:
	/**
	 * @brief Instantiates the Weather object
	 */
	Weather();

	virtual void handleChange(KeyPoint* k) = 0;

	virtual std::string getWeather() = 0;
};

#endif
