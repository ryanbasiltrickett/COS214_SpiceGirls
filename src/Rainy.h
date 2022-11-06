<<<<<<< HEAD
#ifndef RAINY_H
#define RAINY_H
#include "Weather.h"
#include "KeyPoint.h"

class Rainy : public Weather {


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
	std::string getWeather();

	/**
	 * @brief Will change the current state of the weather inside the specific keypoint
	 *
	 * Preconditions:
	 *  - keypoint must be a KeyPoint*
	 *
	 * Postconditions:
	 *  - Changes the current weather to the next one in the state pattern (Sunny)
	 *
	 * @param keypoint must be a KeyPoint*
	 * @return void
	 */
	void handleChange(KeyPoint* keypoint);
};

#endif
=======
#ifndef RAINY_H
#define RAINY_H
#include "Weather.h"
#include "KeyPoint.h"

class Rainy : public Weather {


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
	std::string getWeather();

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
	void handleChange(KeyPoint* k);

	/**
	 * @brief Returns a clone of the Rainy object
	 * 
	 * @return Weather* The clone of the rainy object
	 */
	Weather* clone();
};

#endif
>>>>>>> 7be49738cebc0ced3357f2ce74f6fda2ea0b3d5e
