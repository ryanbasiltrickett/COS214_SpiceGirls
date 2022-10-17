#ifndef AGGRESSIVE_H
#define AGGRESSIVE_H
#include "Strategy.h"
#include "Alliance.h"

class Aggressive : public Strategy {

public:
	/**
	 * @brief Construct a new Aggressive object
	 * 
	 */
	Aggressive();

	/**
	 * @brief Destroy the Aggressive object
	 * 
	 */
	~Aggressive()


	/**
	 * @author Antwi-Antwi
	 * @brief This function will perform an Aggresive strategy
	 * @param keyPoint an Aggressive strategy will then be performed at this specific keypoint
	 * @return void The function will return a void
	 */
	void performStrat(KeyPoint* keyPoint);


};

#endif
