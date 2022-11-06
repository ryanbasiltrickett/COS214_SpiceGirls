<<<<<<< HEAD
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
	Area* area;
	vector<Alliance*> alliances;

public:
	/**
	 * @brief Initializes an instance of the WarEngineState class.
	 *
	*/
	WarEngineState();

	/**
	 * @brief Takes in a vector of Area and sets it to the areas member of the WarEngineState instance.
	 * 
	 * Preconditions:
	 * 	- area must be of type Area*
	 * 
	 * Postconditions:
	 * 	- Sets the WarEngineState area member variable to the passed in parameter.
	 * 
	 * @param area must be an Area*
	 * @return void
	*/
	void setArea(Area* area);

	/**
	 * @brief Returns the member variable area.
	 * 
	 * Postconditions:
	 * 	- Retruns the area stored in the state
	 * 
	 * @return Area*
	*/
	Area* getArea();

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
=======
#ifndef WARENGINESTATE_H
#define WARENGINESTATE_H
#include "Alliance.h"
#include "Area.h"
#include <vector>

class WarEngine;

using namespace std;

/**
 * @class WarEngineState
 * @brief Class for storing current state of entire simulation.
 * @details Class contains member variables areas which stores a vector of all war theatres and keypoints as well as a vector of all alliances in current simulation.
 * 
*/
class WarEngineState {

friend class WarEngine;

private:
	Area* area;
	vector<Alliance*> alliances;

	/**
	 * @brief Initializes an instance of the WarEngineState class.
	 *
	*/
	WarEngineState();

	/**
	 * @brief Takes in a vector of Area and sets it to the areas member of the WarEngineState instance.
	 * 
	 * Preconditions:
	 * 	- area must be of type Area*
	 * 
	 * Postconditions:
	 * 	- Sets the WarEngineState area member variable to the passed in parameter.
	 * 
	 * @param area must be an Area*
	 * @return void
	*/
	void setArea(Area* area);

	/**
	 * @brief Returns the member variable area.
	 * 
	 * Postconditions:
	 * 	- Retruns the area stored in the state
	 * 
	 * @return Area*
	*/
	Area* getArea();

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
>>>>>>> 7be49738cebc0ced3357f2ce74f6fda2ea0b3d5e
