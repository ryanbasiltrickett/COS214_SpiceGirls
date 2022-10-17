#ifndef STRATEGY_H
#define STRATEGY_H

class Strategy : General {


public:
	Strategy();

	virtual void performStrat(Keypoint* keyPoint) = 0;
};

#endif
