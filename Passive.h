#ifndef PASSIVE_H
#define PASSIVE_H

class Passive : Strategy {


public:
	Passive();

	void performStrat(Keypoint* keyPoint);
};

#endif
