#include "WarEngine.h"

WarEngine::WarEngine(){
	this->state = new WarEngineState();
}

WarEngine::WarEngine(const warEngine&) {
	
}

WarEngineMemento* WarEngine::saveState() {
	WarEngineState* cloneState = new WarEngineState();	
	vector<Alliance*> cloneAlliances;
	vector<Alliance*> cloneAreas;

	for(Alliance* alliance : this->state->getAlliances()){
		cloneAlliances.push_back(alliance->clone());
	}

	for(Area* area : this->state->getAreas()){
		cloneAreas.push_back(area->clone());
	}
	
	cloneState->setAreas(cloneAreas);
	cloneState->setAreas(cloneAreas);

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

	for(Alliance* alliance : this->state->getAlliances()){
		delete alliance;
	}

	for(Area* area : this->state->getAreas()){
		delete area;
	}
	
	delete this->state;
}