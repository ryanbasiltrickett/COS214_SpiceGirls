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

<<<<<<< HEAD
Area* WarTheatre::clone() {
	// TODO - implement WarTheatre::clone
 WarTheatre* warTheatreClone = new WarTheatre();

 for(int i = 0 ; i < this->areas.size(); ++i)
	warTheatreClone->addArea(this->areas[i]);

	return warTheatreClone;
=======
WarTheatre* WarTheatre::clone() {
	WarTheatre* w = new WarTheatre();

	for (int i = 0; i < areas.size(); i++)
		w->addArea(areas[i]->clone());

	return w;
>>>>>>> a4295e93de29acc2a81d07b2501bf4500def6f80
}
