#include "WarEngineState.h"

WarEngineState::WarEngineState() {}

void WarEngineState::setAreas(vector<Area*> areaVect) {
	this->areas = areaVect;
}

vector<Area*> WarEngineState::getAreas() {

	if(areas.size() == 0)
	throw "No Areas Stored.";

	return areas;
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

	for(Area* a : this->areas){
		
		Area * cloneArea = a->clone();

		clonedState->areas.push_back(a);
	}

	for(Alliance* alliance : this->alliances){
		
		Alliance* clonedAlliance = alliance->clone();

		clonedState->alliances.push_back(alliance);

	}

		return clonedState;
	}

WarEngineState::~WarEngineState(){
	//TODO: To be Implemented
	throw "To be implemented";
}