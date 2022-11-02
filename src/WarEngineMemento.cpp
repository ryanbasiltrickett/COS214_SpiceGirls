#include "WarEngineMemento.h"

WarEngineMemento::WarEngineMemento(WarEngineState * state){
	this->state = state;
}

WarEngineMemento::WarEngineMemento(WarEngineState* state){
	this->state = state;
}

void WarEngineMemento::setState(WarEngineState* state){
	this->state = state;
}

WarEngineState* WarEngineMemento::getState(){
	return state;
}
