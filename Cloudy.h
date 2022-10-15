#ifndef CLOUDY_H
#define CLOUDY_H

class Cloudy : Weather {


public:
	Cloudy();

	virtual void handleChange(KeyPoint* k) = 0;

	virtual string getWeather() = 0;
};

#endif
