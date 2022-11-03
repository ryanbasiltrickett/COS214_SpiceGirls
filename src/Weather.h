#ifndef WEATHER_H
#define WEATHER_H
#include <string>
#include "Weather.h"
#include "KeyPoint.h"

class KeyPoint;

class Weather {

protected:
	double multiplier;

public:
	/**
	 * @brief Instantiates the Weather object
	 */
	Weather();

	/**
	 * @brief Destructor for the Weather object
	 */
	~Weather();

	/**
	 * @brief Returns double which shows the weather multiplier
	 *
	 * Postconditions:
	 *  - Returns the double multiplier
	 *
	 * @return double which is the multiplier
	 */
	double getMultiplier();

	virtual void handleChange(KeyPoint* k) = 0;

	virtual std::string getWeather() = 0;
};

#endif
