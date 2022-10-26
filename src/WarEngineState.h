#ifndef WARENGINESTATE_H
#define WARENGINESTATE_H
#include "Alliance.h"
#include "Area.h"
#include <vector>

using namespace std;

/**
 * @class WarEngineState
 * @brief Class for storing current state of entire simulation.
 * @details Class contains member variables areas which stores a vector of all war theatres and keypoints as well as a vector of all alliances in current simulation.
 * 
*/
class WarEngineState {


private:
	vector<Area*> areas;
	vector<Alliance*> alliances;

public:
	/**
	 * @brief Initializes an instance of the WarEngineState class.
	 *
	*/
	WarEngineState();

	/**
	 * @brief Initializes an instance of the WarEngineState class with values from an existing.
	*/
	WarEngineState(WarEngineState* state);
	
	/**
	 * @brief Takes in a vector of Area and sets it to the areas member of the WarEngineState instance.
	 * @param vector<Area*> areaVect
	 * @return void
	*/
	void setAreas(vector<Area*> areaVect);

	/**
	 * @brief Returns the member variable areas.
	 * @return vector<Area*>
	*/
	vector<Area*> getAreas();

	/**
	 * @brief Sets the given vector of Alliance object pointers to the alliances member variable.
	 * @param vector<Alliance*> alliances
	 * @return void
	*/
	void setAlliances(vector<Alliance*> alliances);

	/**
	 * @brief Returns the alliances member variable.
	 * @return vector <Alliance*>
	 * 
	*/
	vector<Alliance*> getAlliances();

	/**
	 * @brief Returns a clone of the current WarEngineMemento object.
	 * @return WarEngineMemento*
	*/
	WarEngineState* clone();
};

#endif
