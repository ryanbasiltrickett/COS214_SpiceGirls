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
};

#endif
