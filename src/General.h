#ifndef GENERAL_H
#define GENERAL_H
#include "Alliance.h"
#include "Strategy.h"

class KeyPoint;

class General {

private:
	Alliance* alliance;
	Strategy* strategy;
	int numDeaths;

public:
	General(Alliance* alliance, Strategy* stratety);

	void evaluateStrategy();

	/**
	 * @brief The function intiates the strategy
	 * 
	 * Precodition:
	 * 	- keyPoint must be a KeyPoint*
	 * 
	 * @param keyPoint must be a KeyPoint*
	 * @return void
	 */ 
	void initiateStrategy(KeyPoint* keyPoint);

	/**
	 * @brief Instantiates and returns a clone of the current General
	 *
	 * Postconditions:
	 *  - Returns the clone of the current General
	 *
	 * @return General* The General clone
	 */
	General* clone();

	/**
	 * @brief Set the Strategy object
	 * 
	 * PreConditons:
	 * - strategy must be of type Strategy*
	 * 
	 * PostConditions:
	 * - true is returned if setting the strategy was successful
	 * - false is returned if setting the strategy was unsuccessful
	 * 
	 * @param strategy 
	 * @return true if the setting the Strategy object was successful
	 * @return false if the setting the Strategy object was unsuccessful
	 */
	bool setStrategy(Strategy* strategy);

	/**
	 * @brief Return the Alliance object
	 * 
	 * PostConditions:
	 *  - Returns the alliance of the general
	 * 
	 * @return Alliance* The alliance that the general is associated
	 */
	Alliance* getAlliance();
};

#endif
