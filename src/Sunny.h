#ifndef SUNNY_H
#define SUNNY_H

class Sunny : Weather {


public:
	Sunny();

	virtual string getWeather() = 0;

	virtual void handleChange(KeyPoint* k) = 0;
};

#endif
