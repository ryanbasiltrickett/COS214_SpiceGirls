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
	 * 
	 * @param name must be a string
	 */
	Country(std::string name);

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
