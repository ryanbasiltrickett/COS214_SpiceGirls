#ifndef GENERAL_H
#define GENERAL_H
#include "Alliance.h"
#include "KeyPoint.h"
#include "Strategy.h"
class General {

private:
	Alliance* alliance;
	KeyPoint* keyPoint;
	Strategy* strat;

public:
	General();

	void evaluateStrategy();

	/**
	 * @brief The function intiates the strategy
	 * 
	 * @return void
	 */ 
	void initiateStrategy();

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
	 * @brief Set the KeyPoint object
	 * 
	 * PreConditons:
	 * - keyPoint must be of type KeyPoint*
	 * 
	 * PostConditions:
	 * - true is returned if setting the KeyPoint object was successful
	 * - false is returned if setting the KeyPoint object was unsuccessful
	 * 
	 * @param keyPoint 
	 * @return true if the setting the KeyPoint object was successful
	 * @return false if the setting the KeyPoint object was unsuccessful
	 */
	bool setKeyPoint(KeyPoint* keyPoint);

	/**
	 * @brief Set the Alliance object
	 * 
	 * PreConditons:
	 * - alliance must be of type Alliance*
	 * 
	 * PostConditions:
	 * - true is returned if setting the Alliance object was successful
	 * - false is returned if setting the Alliance object was unsuccessful
	 * 
	 * @param alliance 
	 * @return true if the setting the Alliance object was successful
	 * @return false if the setting the Alliance object was unsuccessful
	 */
	bool SetAlliance(Alliance* alliance);
};

#endif
