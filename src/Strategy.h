#ifndef STRATEGY_H
#define STRATEGY_H
#include <string>
#include <ctime>
#include <cstdlib>

class KeyPoint;
class Alliance;

class Strategy {

protected:
	std::string strategy;

public:
	/**
	 * @brief Construct a new Strategy object
	 * 
	 */
	Strategy();

	/**
	 * @brief Destroy the Strategy object
	 * 
	 */
	~Strategy();

	/**
	 * 
	 * @brief This function will perform a strategy
	 * 
	 * @param keyPoint a strategy will then be performed at this specific keypoint
	 * 
	 * @return void The function will return void
	 */
	
	virtual void performStrat(KeyPoint* keyPoint, Alliance* alliance) = 0;


	/**
	 * @brief Returns the cloned Strategy object
	 * 
	 * PostConditions:
	 *  - Returns the clone of the current Strategy
	 * 
	 * @return Strategy* The cloned object
	 */

	virtual Strategy* clone() = 0;
};

#endif
