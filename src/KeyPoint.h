#ifndef KEYPOINT_H
#define KEYPOINT_H
#include "Area.h"
#include "Weather.h"
#include "Entity.h"
#include "CommandCenter.h"
#include <vector>

/**
 * @brief Keypoint class
 * 
 * Used to emulate strategic positions.
 */
class KeyPoint : Area {

private:
	vector<Entity*> entities;
	vector<CommandCenter*> comCenters;
	Weather* weather;
	std::string AreaType;

public:
	/**
	 * @brief Instantiates the key point
	 */
	KeyPoint(std::string AreaType);

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
	 * @param area must be an Area*
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
	
	/**
	 * @brief Adds command centers to the comCenters vector
	 *
	 * Preconditions:
	 *  - comCenter must be a CommandCenter*
	 *
	 * Postconditions:
	 *  - Adds the passed in comCenter to the comCenters vector 
	 *
	 * @param comCenter must be a CommandCenter*
	 * @return void
	 */
	void attach(CommandCenter* comCenter);

	/**
	 * @brief Removes command centers from the comCenters vector
	 *
	 * Preconditions:
	 *  - comCenter must be a CommandCenter*
	 *
	 * Postconditions:
	 *  - Removes the passed in comCenter from the comCenters vector 
	 *
	 * @param comCenter must be a CommandCenter*
	 * @return void
	 */
	void detach(CommandCenter* comCenter);

	/**
	 * @brief Notifies the attached command centers when a change in the Keypoint's state (entities or weather) occurs
	 *
	 * Postconditions:
	 *  - Notifies the command centers in the comCenters vector when a change in the Keypoint's state (entities or weather) occurs
	 *
	 * @return void
	 */
	void notify();
	
	/**
	 * @brief Instantiates and returns a clone of the current Keypoint
	 *
	 * Postconditions:
	 *  - Returns the clone of the current Keypoint
	 *
	 * @return Area* The Keypoint clone
	 */
	Area* clone();

	/**
	 * @brief Set the Weather object
	 * 
	 * @param weather 
	 */
	void setWeather(Weather* weather);

	/**
	 * @brief The area type is returned
	 * 
	 * @return string The area type
	 */
	std::string getAreaType() const;
};

#endif
