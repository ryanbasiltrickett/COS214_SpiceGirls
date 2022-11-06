#include "Sunny.h"
#include "Cloudy.h"

Sunny::Sunny() {
	this->multiplier = 1.0;
}

std::string Sunny::getWeather() {
	return "Sunny";
}

void Sunny::handleChange(KeyPoint* k) {
	Cloudy* newWeather = new Cloudy();
	k->setWeather(newWeather);
}

Weather* Sunny::clone() {
	return new Sunny();
}