#ifndef WARENGINEMEMENTO_H
#define WARENGINEMEMENTO_H

class WarEngineMemento {

/**
 * @class WarEngineMemento
 * @details Class that encapsulates and externalises WarEngine State.
 * 
*/
private:
	WarEngineState state;

public:
	/**
	 * @brief Instantiates a WarEngineMemento class instance, setting the state to the given parameters.
	 * @param players Vector of all active players in the simulation.
	 * @param warTheatre Vector of all warTheatre instances (and keypoints) currently active in simulation.
	*/
	WarEngineMemento(vector<Alliance*> players, vector<Area*> warTheatre);
};

#endif
