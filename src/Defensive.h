#ifndef DEFENSIVE_H
#define DEFENSIVE_H
#include "Strategy.h"
#include "KeyPoint.h"
#include "Alliance.h"
#include "Personnel.h"
class Defensive : public Strategy {


public:
	Defensive();

	/**
	 * @author Antwi-Antwi
	 * 
	 * @brief This function will perform an Defensive strategy
	 * 
	 * @param keyPoint an Defensive strategy will then be performed at this specific keypoint
	 * 
	 * @return void The function will return a void
	 */
	void performStrat(KeyPoint* keyPoint, Alliance* alliance);
};

#endif
