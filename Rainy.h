#ifndef RAINY_H
#define RAINY_H

class Rainy : Weather {


public:
	Rainy();

	virtual string getWeather() = 0;

	virtual void handleChange(KeyPoint* k) = 0;
};

#endif
