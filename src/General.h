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
	/**
	 * @brief Construct a new General object
	 * 
	 * @param alliance must be an Alliance*
	 * @param strategy must be a Strategy*
	 */
	General(Alliance* alliance, Strategy* strategy);

	/**
	 * @brief The function intiates the strategy
	 * 
	 * Precondition:
	 * 	- keyPoint muse be a KeyPoint*
	 * 
	 * @param keyPoint must be a KeyPoint*
	 * @return void
	 */ 
	void initiateStrategy(KeyPoint* keyPoint);

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
	 * @brief Returns the Alliance object
	 * 
	 * PostConditions:
	 *  - Returns the alliance of the general
	 * 
	 * @return Alliance* The alliance that the general is associated
	 */
	Alliance* getAlliance();
};

#endif
