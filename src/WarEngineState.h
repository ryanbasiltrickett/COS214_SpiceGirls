#ifndef WARENGINESTATE_H
#define WARENGINESTATE_H

class WarEngineState {

private:
	vector<Area*> areas;
	vector<Alliance*> playerOneAlliance;

public:
	WarEngineState();

	void setAreas();

	Area* getAreas();

	void setAlliances(vector<Alliance*> alliances);

	vector<Alliance*> getAlliances();
};

#endif
