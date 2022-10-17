#ifndef TERRAINTYPE_H
#define TERRAINTYPE_H

class TerrainType : Type {


public:
	/**
	 * @brief Instantiates the terrain type
	 */
	TerrainType();

	/**
	 * @brief Returns terrain type description
	 *
	 * Postconditions:
	 *  - Returns the terrain type
	 *
	 * @return string The terrain type string
	 */
	string getTypeDesc();
};

#endif
