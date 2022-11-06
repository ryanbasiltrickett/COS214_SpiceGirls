<<<<<<< HEAD
<<<<<<< HEAD
#ifndef KEYPOINT_H
#define KEYPOINT_H

#include "Alliance.h"
#include "Area.h"
#include "Entity.h"
#include "General.h"
#include <vector>

class Weather;

/**
 * @brief Keypoint class
 * 
 * Used to emulate strategic positions.
 */
class KeyPoint : public Area {

private:
	vector<Entity*> entities;
	vector<General*> generals;
	Weather* weather;
	std::string AreaType;

public:
	/**
	 * @brief Instantiates the key point
	 * 
	 * @param areaName must be an string
	 */
	KeyPoint(std::string areaName);

	/**
	 * @brief Instantiates a copy of a KeyPoint
	 * 
	 * @param keyPoint must be an KeyPoint instance
	 */
	KeyPoint(KeyPoint& keyPoint);

	~KeyPoint();

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
	 * 
	*/
	void addGeneral(General* general);

	void removeGeneral(General* general);

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
	 * @brief Switches the Weather object to the next state
	 * 
	 */
	void changeWeather();
  
  /**
	 * @brief Set the Weather object
	 * 
	 * Preconditions:
	 *  - weather must be a Weather*
	 * 
	 * Postconditions:
	 * 	- must set the keyPoints weather state
	 * 
	 * @param weather must be a Weather*
	 * @return void
	 */
  void setWeather(Weather* weather);
   
	/**
	 * @brief The weather at the current state is returned
	 * 
	 * @return string The weather state
	 */
	std::string getWeather() const;
	
};

#endif
=======
#ifndef KEYPOINT_H
#define KEYPOINT_H

#include "Alliance.h"
#include "Area.h"
#include "Entity.h"
#include "General.h"
#include <vector>

class Weather;

/**
 * @brief Keypoint class
 * 
 * Used to emulate strategic positions.
 */
class KeyPoint : public Area {

private:
	vector<Entity*> entities;
	vector<General*> generals;
	Weather* weather;
	std::string AreaType;

public:
	/**
	 * @brief Instantiates the key point
	 * 
	 * @param areaName must be an string
	 */
	KeyPoint(std::string areaName);

	/**
	 * @brief Instantiates a copy of a KeyPoint
	 * 
	 * @param keyPoint must be an KeyPoint instance
	 */
	KeyPoint(KeyPoint& keyPoint);

	~KeyPoint();

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
	 * @brief This function is applicable and usable in WarTheatre
	 */
	void addGeneral(General* general);


	/**
	 * @brief This function is applicable and usable in WarTheatre
	 */

	void removeGeneral(General* general);

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
	 * @brief Switches the Weather object to the next state
	 * 
	 */
	void changeWeather();
  
  /**
	 * @brief Set the Weather object
	 * 
	 * Preconditions:
	 *  - weather must be a Weather*
	 * 
	 * Postconditions:
	 * 	- must set the keyPoints weather state
	 * 
	 * @param weather must be a Weather*
	 * @return void
	 */
  void setWeather(Weather* weather);
   
	/**
	 * @brief The weather at the current state is returned
	 * 
	 * @return string The weather state
	 */
	std::string getWeather() const;
	
};

#endif
>>>>>>> 7be49738cebc0ced3357f2ce74f6fda2ea0b3d5e
=======
#ifndef KEYPOINT_H
#define KEYPOINT_H

#include "Alliance.h"
#include "Area.h"
#include "Entity.h"
#include "General.h"
#include <vector>

class Weather;

/**
 * @brief Keypoint class
 * 
 * Used to emulate strategic positions.
 */
class KeyPoint : public Area {

private:
	vector<Entity*> entities;
	vector<General*> generals;
	Weather* weather;
	std::string AreaType;

public:
	/**
	 * @brief Instantiates the key point
	 * 
	 * @param areaName must be an string
	 */
	KeyPoint(std::string areaName);

	/**
	 * @brief Instantiates a copy of a KeyPoint
	 * 
	 * @param keyPoint must be an KeyPoint instance
	 */
	KeyPoint(KeyPoint& keyPoint);

	~KeyPoint();

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

	void addGeneral(General* general);

	void removeGeneral(General* general);

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
	 * @brief Switches the Weather object to the next state
	 * 
	 */
	void changeWeather();
  
  /**
	 * @brief Set the Weather object
	 * 
	 * Preconditions:
	 *  - weather must be a Weather*
	 * 
	 * Postconditions:
	 * 	- must set the keyPoints weather state
	 * 
	 * @param weather must be a Weather*
	 * @return void
	 */
  void setWeather(Weather* weather);
   
	/**
	 * @brief The weather at the current state is returned
	 * 
	 * @return string The weather state
	 */
	std::string getWeather() const;
	
};

#endif
>>>>>>> 7be49738cebc0ced3357f2ce74f6fda2ea0b3d5e
