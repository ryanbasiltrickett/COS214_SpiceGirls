<<<<<<< HEAD
#ifndef AGGRESSIVE_H
#define AGGRESSIVE_H
#include "Strategy.h"

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
	void performStrat(KeyPoint* keyPoint, Alliance* alliance);
};

=======
#ifndef AGGRESSIVE_H
#define AGGRESSIVE_H
#include "Strategy.h"

class Aggressive : public Strategy {

public:
	Aggressive();

	/**
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
	void performStrat(KeyPoint* keyPoint, Alliance* alliance);

	/**
	 * @brief Returns the clone of the Aggressive Strategy object
	 * 
	 * @return Strategy* The clone of the Aggressive Strategy object
	 */
	Strategy* clone();
};

>>>>>>> 7be49738cebc0ced3357f2ce74f6fda2ea0b3d5e
#endif