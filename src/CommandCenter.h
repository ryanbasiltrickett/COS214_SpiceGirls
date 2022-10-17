#ifndef COMMANDCENTER_H
#define COMMANDCENTER_H
#include "General.h"
#include "KeyPoint.h"

class CommandCenter {

private:
	General* general;
	KeyPoint* keyPoint;

public:
	CommandCenter();

	void update(KeyPoint* keyPoint);

	/**
	 * @brief Instantiates and returns a clone of the current Command Center
	 *
	 * Postconditions:
	 *  - Returns the clone of the current CommandCenter
	 *
	 * @return CommandCenter* The CommandCenter clone
	 */
	CommandCenter* clone();
};

#endif
