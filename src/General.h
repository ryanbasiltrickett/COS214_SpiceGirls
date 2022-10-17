#ifndef GENERAL_H
#define GENERAL_H

class General {

private:
	Alliance* alliance;
	Keypoint* keyPoint;
	Strategy* strat;

public:
	General();

	void evaluateStrategy();

	void initiateStrategy();

	General* clone();
};

#endif
