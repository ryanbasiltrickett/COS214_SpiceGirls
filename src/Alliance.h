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

	/**
	 * @brief  This function will clone the Alliance and return a pointer to be used in the Memento
	 * 
	 * @author Antwi-Antwi
	 * 
	 * @return Alliance* This is a pointer to the cloned Alliance object
	 */
	Alliance* clone();
};

#endif
