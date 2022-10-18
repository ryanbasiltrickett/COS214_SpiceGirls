#ifndef COMMANDCENTER_H
#define COMMANDCENTER_H
#include "General.h"
#include "KeyPoint.h"

/**
 * @brief CommandCenter class
 * 
 * Used to observe the entities and weather at the Keypoint objects.
 */
class CommandCenter {

private:
	General* general;
	KeyPoint* keyPoint;

public:
	/**
	 * @brief Instantiates the CommandCenter
	 */
	CommandCenter();

	/**
	 * @brief Updates the command center's keypoint state
	 *
	 * Preconditions:
	 *  - keyPoint must be a KeyPoint*
	 *
	 * Postconditions:
	 *  - Updates the command centers' keypoint state with the passed in keyPoint
	 *
	 * @param keyPoint must be a KeyPoint*
	 * @return void
	 */
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
