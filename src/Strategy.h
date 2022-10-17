#ifndef STRATEGY_H
#define STRATEGY_H
#include "KeyPoint.h"
#include <string>

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
	 * @author Antwi-Antwi
	 * @brief This function will perform an spifice strategy based on the specific derived class
	 * @param keyPoint A strategy will then be performed at this specific keypoint
	 * @return void The function will return a void
	 */
	virtual void performStrat(KeyPoint* keyPoint) = 0;

	/**
	 * @brief Set the Strategy object
	 * 
	 * @param strategy This will b the new Strategy
	 * @return true If settibng the strategy was successful
	 * @return false If if setting the strategy was unsuccessful
	 */
	bool setStrategy(std::string strategy);

	/**
	 * @brief Get the Strategy object
	 * 
	 * @return Strategy* The current Strategy
	 */
	Strategy* getStrategy() const;
};

#endif
