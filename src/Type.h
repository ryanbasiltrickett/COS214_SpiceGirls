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

	virtual string getTypeDesc() = 0;
	
};

#endif
