#ifndef ALLIANCE_H
#define ALLIANCE_H

class Alliance {

private:
	int aID;
	vector<Factory*> production;
	Negotiator* negotiator;
	vector<Country*> members;
	bool active;

public:
	Alliance();

	void setNegotiator(Negotiator* n);

	boolean addCountry(Country* nation);

	void considerPeace(int id);

	void addFactory(Factory* f);

	void surrender();

	int getID();

	bool offPeace();

	Alliance* clone();
};

#endif
