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
	 * @brief Tries to offer peace to all the alliances in vector
	 *
	 * Preconditions:
	 *  - offerAlliance must be an Alliance pointer
	 *
	 * Postconditions:
	 *  - Iterates through alliance vector and calls considerPeace for the enemies
	 *
	 * @param id must be an int
	 * @return bool
	 */
	bool sendPeace(Alliance* offerAlliance);

	/**
	 * @brief Removes an alliance from the alliance vector
	 *
	 * Preconditions:
	 *  - oldAlliance must be an Alliance pointer
	 *
	 * Postconditions:
	 *  - Alliance is removed from vector
	 *
	 * @return void
	 */
	
	void removeAlliance(Alliance* oldAlliance);

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
	 * @brief gets the number of Alliances in the negotiator
	 *
	 * Postconditions:
	 *  - Returns the number of alliances
	 *
	 * @return int Number of alliances
	 */
	int getNumAlliances();
};

#endif
