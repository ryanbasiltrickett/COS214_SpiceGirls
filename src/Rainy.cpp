#include "Rainy.h"
#include "Sunny.h"

Rainy::Rainy(): Weather() {
	this->multiplier = 0.5;
}

std::string Rainy::getWeather() {
	return "Rainy";
}

void Rainy::handleChange(KeyPoint* k) {
	Sunny* newWeather = new Sunny();
	k->setWeather(newWeather);
}
