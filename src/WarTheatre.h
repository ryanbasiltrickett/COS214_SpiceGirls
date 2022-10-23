#ifndef WARTHEATRE_H
#define WARTHEATRE_H

class WarTheatre : Area {

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
	void ~WarTheatre();

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
	 * @brief Attack with troops from the alliance passed in
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
	void attack(Alliance* alliance);

	/**
	 * @brief Moves a specific alliances troops from one area to another
	 *
	 * Preconditions:
	 * 	- area must be an Area*
	 *  - alliance must be an Alliance*
	 *
	 * Postconditions:
	 *  - Call move troops function on correct area
	 *
	 * @param area musy be an Area*
	 * @param alliance must be an Alliance*
	 * @return void
	 */
	void moveEntities(Area* area, Alliance* alliance);

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
	 * @return Area* The war theatre clone
	 */
	Area* clone();
};

#endif
