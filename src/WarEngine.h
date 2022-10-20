#ifndef WARENGINE_H
#define WARENGINE_H

/**
 * @class WarEngine
 * @details Class that contains all information regarding current simulation. Only one instance of class is allowed.
*/
class WarEngine {

private:
	static WarEngine* uniqueInstance;
	WarEngineState* state;
	boolean gameOver;
	Area* currentWarTheatre;
	vector<Alliance*> alliances;

protected:
	/**
	 * @brief Constructor for class. Is responsible for ensuring only a single instance of class exists
	 * 
	*/
	WarEngine();
	/**
	 *@brief Parameterized constructor for class. 
	*/
	WarEngine(int& warEngine);

public:
	/**
	 * @brief Captures current state of simulation via member variables and creates WarEngineMemento instance storing all relevant members in WarEngineState.
	 * @return WarEngineMemento
	*/
	WarEngineMemento saveState();
	/**
	 * @brief Takes in an instance of saved WarEngine states and sets current instance's member variables to memento state.
	 * @param save
	 * @return void
	*/
	void loadState(WarEngineState save);
};

#endif
