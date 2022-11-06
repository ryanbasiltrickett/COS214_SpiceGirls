#include "WarEngine.h"
#include <iostream>

WarEngine::WarEngine(){
	this->state = new WarEngineState();
}

WarEngineMemento* WarEngine::saveState() {
	return new WarEngineMemento(state->clone());
}

void WarEngine::loadSave(WarEngineMemento* save) {
	delete this->state;
	this->state = save->getState();
}

WarEngine& WarEngine::getInstance(){
	static WarEngine uniqueInstance_;
	return uniqueInstance_;
}

WarEngine::~WarEngine(){
	delete this->state;
}


void WarEngine::simulate() {
	vector<Alliance*> alliances = this->state->getAlliances();

	for(int j = 0; j < alliances.size(); j++) {
		state->getArea()->simulateBattle(alliances[j]);

		cout << "PLACE STATS HERE" << endl;
	}

}

void WarEngine::setWarTheatre(WarTheatre* battleGround){
	state->setArea(battleGround);
}

void WarEngine::addAlliance(Alliance* alliance) {
	state->alliances.push_back(alliance);
}