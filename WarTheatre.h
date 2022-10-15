#ifndef WARTHEATRE_H
#define WARTHEATRE_H

class WarTheatre : Area {

public:
	vector<Area*> areas;

	WarTheatre();

	void ~WarTheatre();

	bool isKeyPoint();

	void attack(Alliance* alliance);

	void moveEntities(Area* area, Alliance* alliance);

	void addArea(Area* area);

	Area* clone();
};

#endif
