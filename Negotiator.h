#ifndef NEGOTIATOR_H
#define NEGOTIATOR_H

class Negotiator {

private:
	vector<Alliance*> alliance;

public:
	Negotiator();

	bool sendPeace(int id);

	void removeAlliance();

	void addAlliance();

	Negotiator* clone();
};

#endif
