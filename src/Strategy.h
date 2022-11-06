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

	virtual Strategy* clone() = 0;
};

#endif
