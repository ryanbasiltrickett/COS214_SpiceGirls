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

	/**
	 * @brief Will change the current state of the weather inside the specific keypoint
	 *
	 * Preconditions:
	 *  - keypoint must be a KeyPoint*
	 *
	 * Postconditions:
	 *  - Changes the current weather to the next one in the state pattern (Cloudy)
	 *
	 * @param keypoint must be a KeyPoint*
	 * @return void
	 */
	virtual void handleChange(KeyPoint* keypoint) = 0;

	/**
	 * @brief Returns a string which tells us the weather
	 *
	 * Postconditions:
	 *  - Returns the wether of the current state
	 *
	 * @return std::string which is the current state
	 */
	virtual std::string getWeather() = 0;

	/**
	 * @brief Returns a clone of the Weather object
	 * 
	 * @return Weather* Clone of Weather object
	 */
	virtual Weather* clone() = 0;  
};

#endif
