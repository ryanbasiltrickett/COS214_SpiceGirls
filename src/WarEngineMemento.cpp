#include "WarEngineMemento.h"

WarEngineMemento::WarEngineMemento(WarEngineState* state, std::string timestamp){
	this->state = state;
	this->timestamp = timestamp;
}

void WarEngineMemento::setState(WarEngineState* state){
	this->state = state;
}

WarEngineState* WarEngineMemento::getState(){
	return state;
}

std::string WarEngineMemento::getTimestamp(){
	return timestamp;
}