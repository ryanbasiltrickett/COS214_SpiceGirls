#include "General.h"

General::General(Alliance* alliance, Strategy* strategy) {
	this->alliance = alliance;
	this->strategy = strategy;
	numDeaths = 0;
}

void General::initiateStrategy(KeyPoint* keyPoint) {
	numDeaths++;
	if (numDeaths >= 5) {
		strategy->performStrat(keyPoint, this->alliance);
		numDeaths = 0;
	}
}

bool General::setStrategy(Strategy* strategy){
	this->strategy = strategy;
	return true;
}

Alliance* General::getAlliance(){
	return this->alliance;
}
