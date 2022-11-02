#include "WarTheatre.h"

using namespace std;

WarTheatre::WarTheatre(string areaName): Area(areaName) {}

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
	WarTheatre* w = new WarTheatre(getAreaName());

	for (int i = 0; i < areas.size(); i++)
		w->addArea(areas[i]->clone());

	return w;
}

string WarTheatre::getAreaName() const {

	return this->areaName;
}


