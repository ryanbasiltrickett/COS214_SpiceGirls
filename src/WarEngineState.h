#ifndef WARENGINESTATE_H
#define WARENGINESTATE_H
#include "Alliance.h"
#include "Area.h"
#include "WarTheatre.h"
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
	WarTheatre* area;
	vector<Alliance*> alliances;

public:
	/**
	 * @brief Initializes an instance of the WarEngineState class.
	 *
	*/
	WarEngineState();

	/**
	 * @brief Takes in a vector of Area and sets it to the areas member of the WarEngineState instance.
	 * @param area WarTheatre*
	 * 
	 * Preconditions:
	 * 	- area must be of type WarTheatre*
	 * 
	 * Postconditions:
	 * 	- Sets the WarEngineState area member variable to the passed in parameter.
	 * 
	 * @return void
	*/
	void setArea(WarTheatre* area);

	/**
	 * @brief Returns the member variable area.
	 * @return WarTheatre*
	*/
	WarTheatre* getArea();

	/**
	 * @brief Sets the given vector of Alliance object pointers to the alliances member variable.
	 * @param vector<Alliance*> alliances
	 * 
	 * Preconditions:
	 * 	- alliances must be a vector of Alliance*
	 * 
	 * Postconditions:
	 * 	- Sets the instance's alliances member variable to the passed in parameter.
	 * 
	 * @return void
	*/
	void setAlliances(vector<Alliance*> alliances);

	/**
	 * @brief Returns the alliances member variable.
	 * 
	 * @return vector <Alliance*>
	 * 
	 * @exception out_of_range save archive is empty
	 *
	*/
	vector<Alliance*> getAlliances();

	/**
	 * @brief Returns a clone of the current WarEngineMemento object.
	 *
	 * @return WarEngineState*
	*/
	WarEngineState* clone();

	/**
	 * @brief Destructor for class.
	*/
	~WarEngineState();
};

#endif
