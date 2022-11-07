#include "Rainy.h"
#include "Sunny.h"

Rainy::Rainy(): Weather() {
	this->multiplier = 0.5;
}

std::string Rainy::getWeather() {
	return "Rainy";
}

void Rainy::handleChange(KeyPoint* keypoint) {
	Sunny* newWeather = new Sunny();
	keypoint->setWeather(newWeather);
}

Weather* Rainy::clone() {
	return new Rainy();
}