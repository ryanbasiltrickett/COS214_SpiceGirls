#include "WarEngineMemento.h"

WarEngineMemento::WarEngineMemento(WarEngineState* state, std::string name){
	this->state = state;
	this->name = name;
}

void WarEngineMemento::setState(WarEngineState* state){
	this->state = state;
}

WarEngineState* WarEngineMemento::getState(){
	return state;
}

std::string WarEngineMemento::getName(){
	return name;
}