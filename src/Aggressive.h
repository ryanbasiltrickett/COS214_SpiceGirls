#ifndef AGGRESSIVE_H
#define AGGRESSIVE_H
#include "Strategy.h"
#include "KeyPoint.h"
#include "Vehicle.h"
#include "Personnel.h"
#include "TerrainType.h"
#include "AquaticType.h"
#include "AerialType.h"
#include "Support.h"

class Aggressive : public Strategy {


public:
	Aggressive();

	/**
	 * @author Antwi-Antwi
	 * 
	 * @brief This function will perform an Aggressive strategy
     * 
     * Preconditions:
	 *  - Takes in object of type KeyPoint as parameter
     * 
     * Postconditions:
	 *  - Returns the Strategy type
	 * 
	 * @param keyPoint an Aggressive strategy will then be performed at this specific keypoint
	 * 
	 * @return void The function will return a void
	 */
	void void performStrat(KeyPoint* keyPoint);
};
