#ifndef AREA_H
#define AREA_H
#include <string>
#include "Alliance.h"

class General;

class Area {

private:
	std::string areaName;

public:
	/**
	 * @brief Instantiates the area
	 */
	Area(std::string areaName);

	/**
	 * @brief Destroys the area object
	 */
	virtual ~Area();

	virtual bool isKeyPoint() = 0;

	virtual void simulateBattle(Alliance* alliance) = 0;

	/**
	 * @brief Get the Area Type object
	 * 
	 * @return std::string reaturns the type
	 */
	std::string getAreaName() const;

	/**
	 * @brief Instantiates and returns a clone of the current war theatre
	 *
	 * Postconditions:
	 *  - Returns the clone of the current war theatre
	 *
	 * @return WarTheatre* The war theatre clone
	 */
	virtual Area* clone() = 0;

	/**
	 * @brief Adds a general to all the points held by the WarTheatre
	 * 
	 * Precoditions:
	 * 	- general must be a General*
	 * 
	 * Postconditions:
	 * 	- Add general to all points
	 * 
	 * @param general must be a General*
	 */
	virtual void addGeneral(General* general) = 0;
};

#endif
