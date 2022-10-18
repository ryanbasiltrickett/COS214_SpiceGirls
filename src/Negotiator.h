#ifndef NEGOTIATOR_H
#define NEGOTIATOR_H
#include <vector>
#include "Alliance.h"

class Negotiator {

private:
	vector<Alliance*> alliance;

public:
	Negotiator();

	bool sendPeace(int id);

	void removeAlliance();

	void addAlliance();

	/**
	 * @brief Instantiates and returns a clone of the current Negotiator
	 *
	 * Postconditions:
	 *  - Returns the clone of the current Negotiatior
	 *
	 * @return Negotiator* The Negotiator clone
	 */
	Negotiator* clone();
};

#endif
