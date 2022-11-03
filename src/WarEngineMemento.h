#ifndef WARENGINEMEMENTO_H
#define WARENGINEMEMENTO_H

#include "WarEngineState.h"
#include <string>
#include <vector>
class WarEngineMemento {

/**
 * @class WarEngineMemento
 * @details Class that encapsulates and externalises WarEngine State.
 * 
*/
private:
	WarEngineState* state;

public:
	/**
	 * @brief Instantiates a WarEngineMemento class instance, setting the state to the given parameters.
	 * 
	 * @param state must be a WarEngineState*
	 * 
	 * */
	WarEngineMemento(WarEngineState* state);

	/**
	 * @brief Instantiates a WarEngineMemento class instance, setting the state to the given parameters.
	 * 
	 * @param state must be a WarEngineState*
	 * @param name must be a string.
	 * 
	 * 	
	 * */
	WarEngineMemento(WarEngineState* state);

	/**
	 * @brief Sets the memento's state to the passed in state.
	 * 
	 * Preconditions:
	 * 	- state must be a WarEngineState*
	 * 
	 * @param state must be of type WarEngineState*
	 * @return void
	*/
	void setState(WarEngineState* state);

	/**
	 * @brief Returns the memento's state.
	 * Postconditions:
	 * 	- Returns the state stored in state member variable.
	 * 
	 * @return WarEngineState*
	*/
	WarEngineState* getState();
};

#endif
