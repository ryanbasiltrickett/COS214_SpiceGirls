#ifndef AREA_H
#define AREA_H
#include <string>
#include "Alliance.h"

class Area {

protected:
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

	virtual void moveEntities(Area* area, Alliance* alliance) = 0;

	/**
	 * @brief Get the Area Type object
	 * 
	 * @return std::string reaturns the type
	 */
	virtual std::string getAreaName() const = 0;

	virtual Area* clone() = 0;
};

#endif
