#ifndef AREA_H
#define AREA_H

class Area {


public:
	/**
	 * @brief Instantiates the area
	 */
	Area();

	/**
	 * @brief Destroys the area object
	 */
	virtual void ~Area();

	virtual bool isKeyPoint() = 0;

	virtual void attack(Alliance* alliance) = 0;

	virtual void moveEntities(Area* area, Alliance* alliance) = 0;

	virtual Area* clone() = 0;
};

#endif
