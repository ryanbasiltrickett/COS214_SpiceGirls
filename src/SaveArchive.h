#ifndef SAVEARCHIVE_H
#define SAVEARCHIVE_H
#include <vector>
#include <string>
#include "WarEngineMemento.h"

/**
 * @class SaveArchive
 * @brief Stores a list of mementos containing simulation state
*/
class SaveArchive {

private:
	std::vector<WarEngineMemento*> saveList;

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
	 * 
	 * Postconditions:
	 * 	- Appends a new 
	 * @param newSave must be a WarEngineMemento*
	 * @return void
	*/
	void addNewSave(WarEngineMemento* newSave);

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
	 * @return boolean
	 * 
	*/
	bool clearSaveList();

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
	 * @return boolean
	 * 
	 * @exception std::out_of_range save archive is empty
	*/
	bool deleteSave(std::string name);
};

#endif
