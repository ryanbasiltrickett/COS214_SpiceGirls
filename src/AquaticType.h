#ifndef AQUATICTYPE_H
#define AQUATICTYPE_H

class AquaticType : Type {


public:
	/**
	 * @brief Instantiates the aquatic type
	 */
	AquaticType();

	/**
	 * @brief Returns aquatic type description
	 *
	 * Postconditions:
	 *  - Returns the aquatic type
	 *
	 * @return string The aquatic type string
	 */
	string getTypeDesc();
};

#endif
