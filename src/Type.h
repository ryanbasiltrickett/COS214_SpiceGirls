#ifndef TYPE_H
#define TYPE_H

#include <string>

using namespace std;

/**
 * @brief Type class
 * 
 * Used to define Entity objects type.
 */
class Type {

public:
	/**
	 * @brief Instantiates the type
	 */
	Type();

	/**
	 * @brief Returns terrain type description
	 *
	 * Postconditions:
	 *  - Returns the terrain type
	 *
	 * @return string The terrain type string
	 */
	virtual string getTypeDesc() = 0;

	/**
	 * @brief returns the the cloned object of Type
	 * 
	 * PostConditions:
	 * - returns Type* type
	 * 
	 * @return Type* The cloned Type object
	 */
	virtual Type* clone() = 0;
	
};

#endif
