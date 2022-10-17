#ifndef TYPE_H
#define TYPE_H

class Type {


public:
	/**
	 * @brief Instantiates the type
	 */
	Type();

	virtual string getTypeDesc() = 0;
};

#endif
