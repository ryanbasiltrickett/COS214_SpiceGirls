#ifndef COUNTRY_H
#define COUNTRY_H

class Country {

private:
	std::string name;
	int id;

public:
	Country();

	/**
	 * @brief Instantiates and returns a clone of the current Country
	 *
	 * Postconditions:
	 *  - Returns the clone of the current Country
	 *
	 * @return Country* The Country clone
	 */
	Country* clone();
};

#endif
