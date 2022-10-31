#ifndef SAVEARCHIVE_H
#define SAVEARCHIVE_H
#include <unordered_map>
#include <string>
#include "WarEngineMemento.h"

/**
 * @class SaveArchive
 * @brief Stores a list of mementos containing simulation state
*/
class SaveArchive {

private:
	std::unordered_map<std::string, WarEngineMemento*> saveList;

public:
	/**
	 * @brief Instantiates the SaveArchive class
	*/
	SaveArchive();
	
	/**
	 * @brief Adds a new save to the list of stored mementos
	 * 
	 * Preconditions:
	 * 	- newSave must be a WarEngineMemento*
	 * 	- newSaveName must be a string
	 * 
	 * Postconditions:
	 * 	- Adds a new memento to list of saves 
	 * @param newSave must be a WarEngineMemento*
	 * @param newSaveName must be a string
	 * @return void
	*/
	void addNewSave(std::string newSaveName, WarEngineMemento* newSave);

	/**
	 * @brief Returns the last saved memento.
	 * 
	 * Postconditions:
	 * 	- Returns the last element in the saveList vector
	 * 
	 * @return WarEngineMemento*
	 * @exception std::out_of_range save archive is empty
	 * @exception std::invalid_argument memento with given name is not found in memento list. 
	*/
	WarEngineMemento* getLastSave();

	/**
	 * @brief Returns the last saved memento.
	 * Preconditions:
	 * 	- name must be a string
	 * 
	 * Postconditions:
	 * 	- Returns the last element in the saveList vector
	 * 
	 * @param name a string
	 * 
	 * @return WarEngineMemento*
	 * 
	 * @exception std::out_of_range save archive is empty
	*/
	WarEngineMemento* getSave(std::string name);
	
	/**
	 * @brief Erases all saved mementos from the list of saves.
	 * Postconditions:
	 * 	- Clears all elements in the saveList vector
	 * 
	 * @return void
	*/
	void clearSaveList();

	/**
	 * @brief Deletes a memento with the matching given name from the list of saved mementos.
	 * Preconditions:
	 * 	- name must be a string in date/time format
	 * 
	 * Postconditions:
	 * 	- Removes the element in the saveList vector with a name matching that of the parameter
	 * 
	 * @param name a string
	 * 
	 * @return void
	 * @exception std::out_of_range save archive is empty
	*/
	void deleteSave(std::string name);
};

#endif
