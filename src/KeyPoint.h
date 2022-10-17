#ifndef KEYPOINT_H
#define KEYPOINT_H

class KeyPoint : Area {

private:
	vector<Entity*> entities;
	vector<CommandCenter*> comCenters;
	Weather* weather;

public:
	/**
	 * @brief Instantiates the key point
	 */
	KeyPoint();

	/**
	 * @brief Returns area type
	 *
	 * Postconditions:
	 *  - Returns true
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
	 *  - Perform attacks on other alliance troops
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
	 *  - Move troops to other area
	 *
	 * @param area musy be an Area*
	 * @param alliance must be an Alliance*
	 * @return void
	 */
	void moveEntities(Area* area, Alliance* alliance);

	/**
	 * @brief Adds an enitity to the key point object
	 *
	 * Preconditions:
	 *  - entity must be an Entity*
	 *
	 * Postconditions:
	 *  - Add entity to key point
	 *
	 * @param entity must be an Entity*
	 * @return void
	 */
	void addEntity(Entity* entity);

	void attach(CommandCenter* comCenter);

	void detach(CommandCenter* comCenter);

	void notify();

	Area* clone();
};

#endif
