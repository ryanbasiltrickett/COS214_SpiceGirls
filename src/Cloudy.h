#ifndef CLOUDY_H
#define CLOUDY_H
#include "Weather.h"
#include <string>

class Cloudy : public Weather {
	
public:
	/**
	 * @brief Instantiates the Cloudy object of the state pattern
	 */
	Cloudy();

	/**
	 * @brief Returns string which tels us the weather
	 *
	 * Postconditions:
	 *  - Returns the wether of ths current state
	 *
	 * @return std::string which is the current state
	 */
	std::string getWeather();

	/**
	 * @brief Will change the current state of the weather inside the specific keypoint
	 *
	 * Preconditions:
	 *  - k must be a KeyPoint*
	 *
	 * Postconditions:
	 *  - Changes the current weather to the next one in the state pattern (Rainy)
	 *
	 * @param k must be a KeyPoint*
	 * @return void
	 */
	void handleChange(KeyPoint* keypoint);

	/**
	 * @brief Returns a clone of the Cloudy object
	 * 
	 * @return Weather* Clone of cloudy object
	 */
	Weather* clone();
};

#endif
