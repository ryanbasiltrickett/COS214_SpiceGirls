#include "Cloudy.h"
#include "Rainy.h"

Cloudy::Cloudy(): Weather() {
	this->multiplier = 0.75;
}

std::string Cloudy::getWeather() {
	return "Cloudy";
}

void Cloudy::handleChange(KeyPoint* k) {
	Rainy* newWeather = new Rainy();
	k->setWeather(newWeather);
}