#include "Aggressive.h"

Aggressive::Aggressive() {
	this->strategy = "Aggressive";
}

void Aggressive::performStrat(KeyPoint* keyPoint, Alliance* alliance) {

	keyPoint->notify();
	Type* type;
	if(keyPoint->getAreaType() == "Terrain")
		type = new TerrainType();
	else if(keyPoint->getAreaType() == "Aquatic")
		type = new AquaticType();
	else
		type = new AerialType();
		
	for(int i = 0;i < 2; ++i)
		keyPoint->addEntity(new Vehicle(type));

	for(int i = 0; i < 5; ++i)
		keyPoint->addEntity(new Personnel(type));

	for(int i = 0; i < 3; ++i)
		keyPoint->addEntity(new Support(type));
	
	keyPoint->moveEntities(keyPoint, alliance);
}

