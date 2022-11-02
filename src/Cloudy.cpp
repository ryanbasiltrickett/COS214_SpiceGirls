#include "Cloudy.h"
#include "Rainy.h"

Cloudy::Cloudy() {
	
}

std::string Cloudy::getWeather() {
	return "Cloudy";
}

void Cloudy::handleChange(KeyPoint* k) {
	Rainy* newWeather = new Rainy();
	k->setWeather(newWeather);
}