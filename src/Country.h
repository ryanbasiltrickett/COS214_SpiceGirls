#ifndef COUNTRY_H
#define COUNTRY_H

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
};

#endif
