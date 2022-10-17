#ifndef AERIALTYPE_H
#define AERIALTYPE_H

class AerialType : Type {


public:
	/**
	 * @brief Instantiates the ariel type
	 */
	AerialType();

	/**
	 * @brief Returns ariel type description
	 *
	 * Postconditions:
	 *  - Returns the ariel type
	 *
	 * @return string The ariel type string
	 */
	string getTypeDesc();
};

#endif
