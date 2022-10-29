#ifndef WARTHEATRE_H
#define WARTHEATRE_H

#include "Area.h"
#include "Alliance.h"
#include <vector>

using namespace std;

class WarTheatre : public Area {

private:
	vector<Area*> areas;

public:
	/**
	 * @brief Instantiates the war theatre
	 */
	WarTheatre(std::string areaType);

	/**
	 * @brief Destroys the war theatre object
	 *
	 * Postconditions:
	 *  - All dynamic memory should be deallocated from the war theatre object
	 */
	~WarTheatre();

	/**
	 * @brief Returns area type
	 *
	 * Postconditions:
	 *  - Returns false
	 *
	 * @return bool The area type
	 */
	bool isKeyPoint();

	/**
	 * @brief Simulate Battle with troops from the alliance passed in
	 *
	 * Preconditions:
	 *  - alliance must be an Alliance*
	 *
	 * Postconditions:
	 *  - Call attacks function of areas
	 *
	 * @param alliance must be an Alliance*
	 * @return void
	 */
	void simulateBattle(Alliance* alliance);

	/**
	 * @brief Adds an area to the war theatre object
	 *
	 * Preconditions:
	 *  - area must be an Area*
	 *
	 * Postconditions:
	 *  - Add area to war theatre object
	 *
	 * @param area must be an Area*
	 * @return void
	 */
	void addArea(Area* area);

	/**
	 * @brief Clones a WarTheathr object and returns it
	 * 
	 * @return WarTheatre* Th pointer to an warTheatr object that has been cloned
	 */
	WarTheatre* clone();

	/**
	 * @brief Get the Area Type object
	 * 
	 * @return std::string reaturns the type
	 */
	std::string getAreaType() const;
};

#endif
