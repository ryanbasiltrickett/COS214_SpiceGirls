#ifndef WARENGINE_H
#define WARENGINE_H

class WarEngine {

private:
	static WarEngine* uniqueInstance;
	WarEngineState* state;
	boolean gameOver;
	Area* currentWarTheatre;
	vector<Alliance*> alliances;

protected:
	WarEngine();

	WarEngine(int& warEngine);

public:
	WarEngineMemento saveState();

	void loadState(WarEngineState save);
};

#endif
