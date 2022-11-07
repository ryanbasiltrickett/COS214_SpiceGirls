#include "TerrainType.h"

TerrainType::TerrainType() {}

string TerrainType::getTypeDesc() {
	return "Terrain";
}

Type* TerrainType::clone() {
	return new TerrainType();
}