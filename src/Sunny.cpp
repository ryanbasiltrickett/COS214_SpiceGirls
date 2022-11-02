#include "Sunny.h"
#include "Cloudy.h"

Sunny::Sunny() {
	
}

std::string Sunny::getWeather() {
	return "Sunny";
}

void Sunny::handleChange(KeyPoint* k) {
	Cloudy* newWeather = new Cloudy();
	k->setWeather(newWeather);
}
