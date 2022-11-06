#ifndef COUNTRY_H
#define COUNTRY_H
#include <string>

class Country {

private:
	std::string name;
	int id;

public:
	/**
	 * @brief Instantiates the Country
	 */
	Country();

	/**
	 * @brief Instantiates and returns a clone of the current Country
	 *
	 * Postconditions:
	 *  - Returns the clone of the current Country
	 *
	 * @return Country* The country clone
	 */
	Country* clone();

	/**
	 * @brief Set the name of the country
	 * 
	 * Precondition:
	 * - The variale name is type of string 
	 * 
	 * Preconditions:
	 * - The variable name is set the the passed in parameter
	 * @param name 
	 */
	void setName(std::string name);

	
	/**
	 * @brief Set the if of the country
	 * 
	 * Precondition:
	 * - The variale if is type of int 
	 * 
	 * Preconditions:
	 * - The variable id is set the the passed in parameter
	 * @param id 
	 */
	void setID(int id);

	/**
	 * @brief Get the name of the country
	 * 
	 * PostConditions:
	 * - Return the name of the country
	 * 
	 * @return string 
	 */
	std::string getName() const;

	/**
	 * @brief Get the id of the country
	 * 
	 * PostConditions:
	 * - return the id the id of the country	
	 * 
	 * @return int
	 */
	int getID() const;

};

#endif
