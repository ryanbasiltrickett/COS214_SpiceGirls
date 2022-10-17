#ifndef WARTHEATRE_H
#define WARTHEATRE_H
#include "Area.h"
#include <vector>
#include "Alliance.h"

class WarTheatre : public Area {

public:
	vector<Area*> areas;

	WarTheatre();

	void ~WarTheatre();

	bool isKeyPoint();

	void attack(Alliance* alliance);

	void moveEntities(Area* area, Alliance* alliance);

	void addArea(Area* area);

	/**
	 * @brief This function will return clome
	 * 
	 * @return Area* 
	 */
	Area* clone();
};

#endif
