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
	WarTheatre();

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
	 * @brief Instantiates and returns a clone of the current war theatre
	 *
	 * Postconditions:
	 *  - Returns the clone of the current war theatre
	 *
	 * @return WarTheatre* The war theatre clone
	 */
	WarTheatre* clone();
};

#endif
