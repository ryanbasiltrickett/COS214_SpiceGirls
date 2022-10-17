#ifndef AREA_H
#define AREA_H
#include "Area.h"
#include "Alliance.h"

class Area {


public:
	Area();

	void ~Area();

	virtual bool isKeyPoint() = 0;

	virtual void attack(Alliance* alliance) = 0;

	virtual void moveEntities(Area* area, Alliance* alliance) = 0;

	/**
	 * @brief This function will return copy of Area object
	 * 
	 * @author Antwi-Antwi
	 * 
	 * @return Area
	 * 
	 * The function will clone the Area object be used in Memento to able to restore the Area some time in the future
	 */
	virtual Area* clone() = 0;
};

#endif
