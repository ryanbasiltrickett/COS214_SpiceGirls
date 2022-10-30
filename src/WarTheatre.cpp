#include "WarTheatre.h"

WarTheatre::WarTheatre(): Area() {}

bool WarTheatre::isKeyPoint() {
	return false;
}

void WarTheatre::simulateBattle(Alliance* alliance) {
	for (int i = 0; i < areas.size(); i++)
		areas[i]->simulateBattle(alliance);
}

void WarTheatre::addArea(Area* area) {
	areas.push_back(area);
}

WarTheatre* WarTheatre::clone() {
	WarTheatre* w = new WarTheatre();

	for (int i = 0; i < areas.size(); i++)
		w->addArea(areas[i]->clone());

	return w;
}
