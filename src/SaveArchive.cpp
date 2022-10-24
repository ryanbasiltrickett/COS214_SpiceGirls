#include "SaveArchive.h"

SaveArchive::SaveArchive() {
	std::vector<WarEngineMemento*> temp (1);
	saveList = temp;
}

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

WarEngineMemento* SaveArchive::getSave(std::string timestamp) {
	if(saveList.size() == 0){
		std::__throw_out_of_range("Save archive is empty");
	}

	for(int i = 0; i < saveList.size(); i++){
		
		WarEngineMemento * currMemento = saveList[i];

		if(timestamp.compare(currMemento->getTimestamp()) == 0 ){
			return currMemento;
		}
	}

	std::__throw_invalid_argument("No save with given timestamp exists");
}

bool SaveArchive::clearSaveList() {
	saveList.clear();

	return true;	
}

bool SaveArchive::deleteSave(std::string timestamp) {
	if(saveList.size() == 0){
		std::__throw_out_of_range("Save archive is empty");
	}

	for(int i = 0; i < saveList.size(); i++){
		
		WarEngineMemento * currMemento = saveList[i];

		if(timestamp.compare(currMemento->getTimestamp()) == 0 ){
			return true;
		}
	}

	return false;
}
