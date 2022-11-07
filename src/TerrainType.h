#ifndef TERRAINTYPE_H
#define TERRAINTYPE_H

#include "Type.h"

/**
 * @brief TerrainType class
 * 
 * Used to define Entity objects as terrain type.
 */
class TerrainType : public Type {

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

	/**
	 * @brief returns the the cloned object of Type
	 * 
	 * PostConditions:
	 * - returns Type* type
	 * 
	 * @return Type* The cloned Type object
	 */
	Type* clone();
};

#endif
