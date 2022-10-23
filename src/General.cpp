#include "General.h"

General::General() {

}

void General::evaluateStrategy() {
	throw "Not yet implemented";
}

void General::initiateStrategy() {
	strat->performStrat(this->keyPoint, this->alliance);
}

General* General::clone() {

	General* generalClone = new General();

	generalClone->setKeyPoint(this->keyPoint);
	generalClone->setStrategy(this->strat);
	generalClone->SetAlliance(this->alliance);

	return generalClone;
}

bool General::setKeyPoint(Strategy* strategy){
	this->strategy = strategy;
	return true;
}

bool General::setKeyPoint(KeyPoint* keypoint){
	this->keyPoint = keyPoint;
	return true;
}

bool General::SetAlliance(Alliance* alliance){
	this->alliance = alliance;
	return true;
}
