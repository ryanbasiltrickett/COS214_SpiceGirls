#include "WarTheatre.h"

using namespace std;

WarTheatre::WarTheatre(string areaName): Area(areaName) {}

WarTheatre::~WarTheatre() {
	for (int i = 0; i < areas.size(); i++)
		delete areas[i];
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
	WarTheatre* w = new WarTheatre(getAreaName());

	for (int i = 0; i < areas.size(); i++)
		w->addArea(areas[i]->clone());

	return w;
}

void WarTheatre::addGeneral(General* general) {
	for (int i = 0; i < areas.size(); i++)
		areas[i]->addGeneral(general);
}
