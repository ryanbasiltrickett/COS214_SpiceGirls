#ifndef STRATEGY_H
#define STRATEGY_H
#include "KeyPoint.h"
#include "Alliance.h"
#include <string>
#include <ctime>
#include <cstdlib>


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
	virtual void performStrat(KeyPoint* keyPoint, Alliance* alliance) = 0;

};

#endif
