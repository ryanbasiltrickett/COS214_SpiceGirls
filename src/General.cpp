#include "General.h"

General::General(Alliance* alliance, KeyPoint* keyPoint, Strategy* strategy) {
	this->alliance = alliance;
	this->keyPoint = keyPoint;
	this->strategy = strategy;
}

void General::evaluateStrategy() {
	throw "Not yet implemented";
}

void General::initiateStrategy() {
	strategy->performStrat(this->keyPoint, this->alliance);
}

General* General::clone() {

	return new General(this->alliance, this->keyPoint, this->strategy);
}

bool General::setStrategy(Strategy* strategy){
	this->strategy = strategy;
	return true;
}

bool General::SetAlliance(Alliance* alliance){
	this->alliance = alliance;
	return true;
}
