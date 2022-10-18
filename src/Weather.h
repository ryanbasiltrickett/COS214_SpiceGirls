#ifndef WEATHER_H
#define WEATHER_H

class Weather {


public:
	Weather();

	void ~Weather();

	virtual void handleChange(KeyPoint* k) = 0;

	virtual string getWeather() = 0;
};

#endif
