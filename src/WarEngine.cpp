#include "WarEngine.h"

WarEngine::WarEngine(){
	this->state = new WarEngineState();
}

WarEngineMemento* WarEngine::saveState() {
	WarEngineState* cloneState = new WarEngineState();	
	vector<Alliance*> cloneAlliances;
	
	for(Alliance* alliance : this->state->getAlliances()){
		cloneAlliances.push_back(alliance->clone());
	}

	cloneState->setArea(this->state->getArea()->clone());
	cloneState->setAlliances(cloneAlliances);

	return new WarEngineMemento(cloneState);
}

void WarEngine::loadState(WarEngineState* save) {
	delete this->state;
	this->state = save;
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
	}

}

void WarEngine::setWarTheatre(WarTheatre* battleGround){
	state->setArea(battleGround);
}