#include "WarEngine.h"

WarEngine::WarEngine() {
	// TODO - implement WarEngine::WarEngine
	throw "Not yet implemented";
}

WarEngine::WarEngine(int& warEngine) {
	// TODO - implement WarEngine::WarEngine
	throw "Not yet implemented";
}

WarEngineMemento WarEngine::saveState() {
	// TODO - implement WarEngine::saveState
	throw "Not yet implemented";
}

void WarEngine::loadState(WarEngineState* save) {
	// TODO - implement WarEngine::loadState
	throw "Not yet implemented";
}

void WarEngine::simulate() {

	for(int i = 0; i < areas.size(); i++) {

		for(int j = 0; j < alliances.size(); j++) {

			area[i]->simulateBattle(alliances[j]);
		}
	}

}
