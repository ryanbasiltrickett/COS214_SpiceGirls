#ifndef WEATHER_H
#define WEATHER_H

class Weather {


public:
	/**
	 * @brief Instantiates the Weather object
	 */
	Weather();

	/**
	 * @brief Destructor for the Weather object
	 */
	~Weather();

	virtual void handleChange(KeyPoint* k) = 0;

	virtual string getWeather() = 0;
};

#endif
