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
	
	std::string timestamp;

public:
	/**
	 * @brief Instantiates a WarEngineMemento class instance, setting the state to the given parameters.
	 * 
	 * @param state must be a WarEngineState*
	 * @param timestamp must be a UTC time formatted string.
	 * 
	 * 	
	 * */
	WarEngineMemento(WarEngineState* state, std::string timestamp);

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

	/**
	 * @brief Returns the UTC timestamp string value of memento.
	 * 
	 * Postconditions:
	 * 	- Returns the string value stored in timestamp variable.
	 * 
	 * @return string
	*/
	std::string getTimestamp();
};

#endif
