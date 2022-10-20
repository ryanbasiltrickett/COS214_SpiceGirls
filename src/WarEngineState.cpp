#include "WarEngineState.h"

WarEngineState::WarEngineState() {
	// TODO - implement WarEngineState::WarEngineState
	throw "Not yet implemented";
}

void WarEngineState::setAreas(vector<Area*> areaVect) {
	this->areas = areaVect;
}

vector<Area*> WarEngineState::getAreas() {

	if(areas == nullptr)
	throw "No Areas Stored.";

	return areas;
}

void WarEngineState::setAlliances(vector<Alliance*> alliances) {
	this->alliances = alliances;
}

vector<Alliance*> WarEngineState::getAlliances() {

	if(this->alliances == nullptr)
	throw "No Alliances stored";

	return this->alliances;
}
