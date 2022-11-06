#include "WarEngineState.h"

WarEngineState::WarEngineState() {
	area = nullptr;
}

void WarEngineState::setArea(Area* area) {
	this->area = area;
}

Area* WarEngineState::getArea() {

	if(area == nullptr)
		throw "No Areas Stored.";

	return this->area;
}

void WarEngineState::setAlliances(vector<Alliance*> alliances) {
	this->alliances = alliances;
}

vector<Alliance*> WarEngineState::getAlliances() {

	if(alliances.size() == 0)
		std::__throw_out_of_range("No Alliances stored.");

	return alliances;
}

WarEngineState* WarEngineState::clone(){

	WarEngineState* clonedState = new WarEngineState();

	clonedState->setArea( this->area->clone() );

	for(Alliance* alliance : this->alliances){
		
		Alliance* clonedAlliance = alliance->clone();

		clonedState->alliances.push_back(alliance);

	}

		return clonedState;
	}

WarEngineState::~WarEngineState(){

	for(Alliance* alliance : this->alliances){
		delete alliance;
	}

	delete this->area;
}