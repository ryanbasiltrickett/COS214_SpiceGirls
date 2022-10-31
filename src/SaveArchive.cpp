#include "SaveArchive.h"

SaveArchive::SaveArchive() {}

void SaveArchive::addNewSave(std::string newSaveName, WarEngineMemento* newSave) {
	saveList.insert({newSaveName, newSave});
}

WarEngineMemento* SaveArchive::getLastSave() {
	
	if(saveList.size() == 0){
		throw "Save archive is empty.";
	}

	WarEngineMemento* lastSave = saveList.begin()->second;

	saveList.erase( saveList.begin() );

	return lastSave;
}

WarEngineMemento* SaveArchive::getSave(std::string name) {
	if(saveList.size() == 0){
		std::__throw_out_of_range("Save archive is empty");
	}
	
	auto iter = saveList.find(name);

	if(iter == saveList.end())
		std::__throw_invalid_argument("No save with given name exists");

	return iter->second;
}

void SaveArchive::clearSaveList() {
	saveList.clear();
}

void SaveArchive::deleteSave(std::string name) {
	if(saveList.size() == 0){
		std::__throw_out_of_range("Save archive is empty");
	}

	auto iter = saveList.find(name) ;

	if(iter == saveList.end())
		return;

	saveList.erase( iter );
}
