#include "WarEngineState.h"

WarEngineState::WarEngineState() {}

WarEngineState::WarEngineState(WarEngineState* state){

	for(Area* a : state->areas){
		this->areas.push_back(a);
	}

	for(Alliance* alliance : state->alliances){
		this->alliances.push_back(alliance);
	}

}
	
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
	throw "No Alliances stored";

	return alliances;
}

WarEngineState* WarEngineState::clone(){
	return new WarEngineState(this);
}