#include "WarEngine.h"
#include "RoundStats.h"
#include <iostream>
#include <string>

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
	
	cout << "\n========================================================================" << endl;

	int roundCount = 0;
	vector<Alliance*> alliances = this->state->getAlliances();
	int numAlliances = alliances.size();
	while (numAlliances > 1) {

		if (roundCount % 4 == 0)
		{
			cout << "Press Enter Key to Continue...." << endl;
			cin.clear();
			cin.ignore();
		}
			
		numAlliances = 0;
		for(int i = 0; i < alliances.size(); i++) {
			if (alliances[i]->getActive() == 1) {
				numAlliances++;
				RoundStats::clearStats();
				state->getArea()->simulateBattle(alliances[i]);

				double percLoss = (RoundStats::numLosingPoints * 1.0) / (RoundStats::numLosingPoints + RoundStats::numContestedPoints + RoundStats::numWinningPoints);
				if (percLoss >= 0.7) {
					alliances[i]->surrender();
				} else if (percLoss >= 0.6) {
					alliances[i]->offerPeace();
				}

				cout << "Round No. " << to_string(roundCount++) << endl;

				cout << "========================================================================" << endl << endl;
				cout << "Alliance " << alliances[i]->getID() << ":" << endl;
				
				if (alliances[i]->getActive() == 2) {
					cout << "Status: Surrendered" << endl; 
				} else if (alliances[i]->getActive() == 3) {
					cout << "Status: Found Peace" << endl; 
				} else {
					cout << "Status: Active" << endl; 
				}

				cout << RoundStats::toString() << endl;
				cout << "========================================================================" << endl;
			}

		}
		
	}

	for(int i = 0; i < alliances.size(); i++) {
		cout << "========================================================================" << endl << endl;
		cout << "Alliance " << alliances[i]->getID() << ":" << endl;
		
		if (alliances[i]->getActive() == 2) {
			cout << "Status: Surrendered" << endl; 
		} else if (alliances[i]->getActive() == 3) {
			cout << "Status: Found Peace" << endl; 
		} else {
			cout << "Status: Winner" << endl; 
		}

		cout << endl << "========================================================================" << endl;
	}

	cout << "SIMULATION COMPLETE!" << endl;

}

void WarEngine::setWarTheatre(WarTheatre* battleGround){
	state->setArea(battleGround);
}

void WarEngine::addAlliance(Alliance* alliance) {
	state->alliances.push_back(alliance);
}