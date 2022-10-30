#ifndef NEGOTIATOR_H
#define NEGOTIATOR_H
#include <vector>
#include "Alliance.h"

class Negotiator {

private:
	vector<Alliance*> alliances;

public:
	/**
	 * @brief Instantiates the Negotiator
	 */
	Negotiator();

	/**
	 * @brief Destructor for the Negotiator object
	 */
	~Negotiator();

	/**
	 * @brief Sets the entities type state
	 *
	 * Preconditions:
	 *  - id must be an integer
	 *
	 * Postconditions:
	 *  - Iterates through alliance vector and calls considerPeace for the enemies
	 *
	 * @param id must be an int
	 * @return bool
	 */
	bool sendPeace(int id);

	/**
	 * @brief Removes an alliance from the alliance vector
	 *
	 * Preconditions:
	 *  - id must be an integer
	 *
	 * Postconditions:
	 *  - Alliance is removed from vector
	 *
	 * @return void
	 */
	void removeAlliance(Alliance* alliance);

	/**
	 * @brief Adds an alliance to the alliance vector
	 *
	 * Preconditions:
	 *  - newAlliance must be an Alliance pointer
	 *
	 * Postconditions:
	 *  - Alliance is added to the vector
	 *
	 * @return void
	 */
	void addAlliance(Alliance* newAlliance);

	/**
	 * @brief Instantiates and returns a clone of the current Negotiator
	 *
	 * Postconditions:
	 *  - Returns the clone of the current Negotiator
	 *
	 * @return Negotiator* The negotiator clone
	 */
	Negotiator* clone();
};

#endif
