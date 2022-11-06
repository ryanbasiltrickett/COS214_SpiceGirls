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
	
	virtual void performStrat(KeyPoint* keyPoint, Alliance* alliance) = 0;

<<<<<<< HEAD
	/**
	 * @brief Returns the cloned Strategy object
	 * 
	 * PostConditions:
	 *  - Returns the clone of the current Strategy
	 * 
	 * @return Strategy* The cloned object
	 */
=======
>>>>>>> 7be49738cebc0ced3357f2ce74f6fda2ea0b3d5e
	virtual Strategy* clone() = 0;
};

#endif
