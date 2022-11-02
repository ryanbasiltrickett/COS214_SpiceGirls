#ifndef WARENGINE_H
#define WARENGINE_H

#include "WarEngineMemento.h"

/**
 * @class WarEngine
 * @details Class that contains all information regarding current simulation. Only one instance of class is allowed.
*/
class WarEngine {

private:
	WarEngineState* state;
	boolean gameOver;

protected:
	/**
	 * @brief Constructor for class. Is responsible for ensuring only a single instance of class exists
	 * 
	*/
	WarEngine();
	/**
	 * @brief Parameterized constructor for class. 
	 *
	 * @param warEngine& An anonymous warEngine reference.
	 *  
	 * Postconditions:
	 * 	- parameter must be of type WarEngine&
	*/
	WarEngine(const WarEngine&){};
	/**
	 * @brief Overloaded operator = for class.
	*/
	WarEngine& operator=(const WarEngine&){};

	/**
	 * @brief Destrcutor for class responsible for freeing all allocated memory.
	 * 
	*/
	~WarEngine();

public:
	/**
	 * @brief Captures current state of simulation via member variables and creates WarEngineMemento instance storing all relevant members in WarEngineState.
	 * @return WarEngineMemento*
	*/
	WarEngineMemento* saveState();

	/**
	 * @brief Takes in an instance of saved WarEngine states and sets current instance's member variables to memento state.
	 * @param save
	 * 
	 * Preconditions:
	 * 	- Save must be of type WarEngineState*
	 * 
	 * Postconditions:
	 * 	- Sets the instance of the class' state member variable to the passed in save parameter.
	 * 
	 * @return void
	*/
	void loadState(WarEngineState* save);

	/**
	 * @brief Function that returns a reference to the current (and only) instance of the class.
	 * 
	 * @return WarEngine&
	*/
	static WarEngine& getInstance();
};

#endif
