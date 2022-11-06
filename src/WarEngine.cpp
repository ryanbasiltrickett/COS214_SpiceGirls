#include "WarEngine.h"
#include "RoundStats.h"
#include <iostream>

WarEngine::WarEngine(){
	this->state = new WarEngineState();
}

WarEngineMemento* WarEngine::saveState() {
	return new WarEngineMemento(state->clone());
}

void WarEngine::loadSave(WarEngineMemento* save) {
	delete this->state;
	this->state = save->getState();
}

WarEngine& WarEngine::getInstance(){
	static WarEngine uniqueInstance_;
	return uniqueInstance_;
}

WarEngine::~WarEngine(){
	delete this->state;
}


void WarEngine::simulate() {
	vector<Alliance*> alliances = this->state->getAlliances();

	for(int i = 0; i < alliances.size(); i++) {
		if (alliances[i]->getActive() == 1) {
			RoundStats::clearStats();
			state->getArea()->simulateBattle(alliances[i]);
			cout << "========================================================================" << endl;
			cout << "Alliance " << alliances[i]->getID() << ":" << endl;
			
			if (alliances[i]->getID() == 2) {
				cout << "Status: Surrendered" << endl; 
			} else if (alliances[i]->getID() == 3) {
				cout << "Status: Found Peace" << endl; 
			} else {
				cout << "Status: Active" << endl; 
			}

			cout << RoundStats::toString() << endl;
			cout << "========================================================================" << endl;
		}
	}

}

void WarEngine::setWarTheatre(WarTheatre* battleGround){
	state->setArea(battleGround);
}

void WarEngine::addAlliance(Alliance* alliance) {
	state->alliances.push_back(alliance);
}