#ifndef DEFENSIVE_H
#define DEFENSIVE_H

class Defensive : Strategy {


public:
	Defensive();

	void performStrat(Keypoint* keyPoint);
};

#endif
