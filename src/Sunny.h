#ifndef SUNNY_H
#define SUNNY_H
#include "Weather.h"
#include "KeyPoint.h"

#include "Weather.h"

class Sunny : public Weather {

public:
	/**
	 * @brief Instantiates the Sunny object of the state pattern
	 */
	Sunny();

	/**
	 * @brief Returns string which tells us the weather
	 *
	 * Postconditions:
	 *  - Returns the wether of ths current state
	 *
	 * @return std::string which is the current state
	 */
	virtual std::string getWeather();

	/**
	 * @brief Will change the current state of the weather inside the specific keypoint
	 *
	 * Preconditions:
	 *  - k must be a KeyPoint*
	 *
	 * Postconditions:
	 *  - Changes the current weather to the next one in the state pattern (Cloudy)
	 *
	 * @param keypoint must be a KeyPoint*
	 * @return void
	 */
	virtual void handleChange(KeyPoint* keypoint);

	/**
	 * @brief Returns the cloned object of Sunny
	 * PostConditions:
	 * - Returns cloned object of Sunny
	 * 
	 * @return Weather* The cloned object
	 */
	Weather* clone();
};

#endif