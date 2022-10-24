#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>

using namespace std;

class Country {

private:
	string name;
	int id;

public:
	/**
	 * @brief Instantiates the Country
	 * 
	 * @param name must be a string
	 */
	Country(string name);

	/**
	 * @brief Instantiates and returns a clone of the current Country
	 *
	 * Postconditions:
	 *  - Returns the clone of the current Country
	 *
	 * @return Country* The country clone
	 */
	Country* clone();
};

#endif
