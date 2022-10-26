#include "SaveArchive.h"

SaveArchive::SaveArchive() {}

void SaveArchive::addNewSave(WarEngineMemento* newSave) {
	saveList.push_back(newSave);
}

WarEngineMemento* SaveArchive::getLastSave() {
	
	if(saveList.size() == 0){
		throw "Save archive is empty.";
	}

	WarEngineMemento* lastSave = saveList[ saveList.size() - 1];

	saveList.pop_back();

	return lastSave;
}

WarEngineMemento* SaveArchive::getSave(std::string name) {
	if(saveList.size() == 0){
		std::__throw_out_of_range("Save archive is empty");
	}

	for(int i = 0; i < saveList.size(); i++){
		
		WarEngineMemento * currMemento = saveList[i];

		if(name.compare(currMemento->getName()) == 0 ){
			return currMemento;
		}
	}

	std::__throw_invalid_argument("No save with given name exists");
}

void SaveArchive::clearSaveList() {
	saveList.clear();
}

bool SaveArchive::deleteSave(std::string name) {
	if(saveList.size() == 0){
		std::__throw_out_of_range("Save archive is empty");
	}

	for(int i = 0; i < saveList.size(); i++){
		
		WarEngineMemento * currMemento = saveList[i];

		if(name.compare(currMemento->getName()) == 0 ){
			return true;
		}
	}

	return false;
}
