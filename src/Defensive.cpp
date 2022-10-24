#include "Defensive.h"

Defensive::Defensive() {

	this->strategy = "Defensive";
}

void Defensive::performStrat(KeyPoint* keyPoint, Alliance* alliance) {
	
	Personnel* personnels = new Personnel[5];
	Type* type;
	if(keyPoint->getAreaType() == "Terrain")
		type = new TerrainType();
	else if(keyPoint->getAreaType() == "Aquatic")
		type = new AquaticType();
	else
		type = new AerialType();

	for(int i = 0; i < 5; ++) {
		personnels[i] = new Personnel(type);
		keyPoint->addEntity(personnels[i]);
	}

	keyPoint->notify();
	
	keyPoint->moveEntities(keyPoint, alliance);
}
