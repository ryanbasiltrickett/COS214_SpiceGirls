#include "WarTheatre.h"

using namespace std;

WarTheatre::WarTheatre(string areaType): Area(areaType), areaType(areaType) {
	
}

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

string WarTheatre::getAreaType() const {

	return this->areaType;
}


