#ifndef KEYPOINT_H
#define KEYPOINT_H
#include "Area.h"
#include "Weather.h"
#include "Entity.h"
#include "CommandCenter.h"
#include <vector>

#include "Alliance.h"
#include "Area.h"
#include "Entity.h"
#include "CommandCenter.h"
#include "Weather.h"
#include <vector>

using namespace std;

/**
 * @brief Keypoint class
 * 
 * Used to emulate strategic positions.
 */
class KeyPoint : public Area {

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
	 * @brief Simulate Battle with troops from the alliance passed in
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
	void simulateBattle(Alliance* alliance);

	/**
	 * @brief Clears the battlefield of all deceased troops
	 *
	 * Postconditions:
	 *  - Notify command centers of each troop who is killed
	 * 
	 * @return void
	 */
	void clearBattlefield();

	/**
	 * @brief Moves a specific alliances troops into this keypoint
	 *
	 * Preconditions:
	 *  - alliance must be an Alliance*
	 *  - numTroops must be an int
	 *
	 * Postconditions:
	 *  - Move troops to into this keypoint
	 *
	 * @param alliance must be an Alliance*
	 * @param numTroops must be an int
	 * @return void
	 */
	void moveEntitiesInto(Alliance* alliance, int numTroops);

	/**
	 * @brief Moves a specific alliances troops out of the keypoint
	 *
	 * Preconditions:
	 *  - alliance must be an Alliance*
	 *  - numTroops must be an int
	 *
	 * Postconditions:
	 *  - Move troops to reserve
	 *
	 * @param alliance must be an Alliance*
	 * @param numTroops must be an int
	 * @return void
	 */
	void moveEntitiesOutOf(Alliance* alliance, int numTroops);

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
