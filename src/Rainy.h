#ifndef RAINY_H
#define RAINY_H

class Rainy : Weather {


public:
	/**
	 * @brief Instantiates the Runny object of the state pattern
	 */
	Rainy();

	/**
	 * @brief Returns string which tels us the weather
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
	 *  - Changes the current weather to the next one in the state pattern (Sunny)
	 *
	 * @param k must be a KeyPoint*
	 * @return void
	 */
	virtual void handleChange(KeyPoint* k);
};

#endif
