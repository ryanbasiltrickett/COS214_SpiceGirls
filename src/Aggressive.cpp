#include "Aggressive.h"

Aggressive::Aggressive() {
	this->strategy = "Aggressive";
}

void Aggressive::performStrat(KeyPoint* keyPoint, Alliance* alliance) {

	Type* type;
	if(keyPoint->getAresType() == "Terrain")
		type = new TerrainType();
	else if(keyPoint->getAresType() == "Aquatic")
		type = new AquaticType();
	else
		type = new AerialType();
		
	for(int i = 0;i < 2; ++i)
		keyPoint->addEntity(new Vehicle(type));

	for(int i = 0; i < 5; ++i)
		keyPoint->addEntity(new Personnel(type));
	
	keyPoint->moveEntities(keyPoint, alliance);
}

