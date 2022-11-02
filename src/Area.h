#ifndef AREA_H
#define AREA_H
#include <string>
#include "Alliance.h"

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

	virtual Area* clone() = 0;
};

#endif
