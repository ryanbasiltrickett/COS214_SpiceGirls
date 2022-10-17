#ifndef FACTORY_H
#define FACTORY_H
#include "Factory.h"
#include "Entity.h"
#include "Alliance.h"
#include "Type.h"
#include "AddOn.h"
class Factory {

private:
	Type* type;
	AddOn* addOns;

public:
	Factory();

	~Factory();

	virtual Entity* createEntity(Alliance* alliance) = 0;

	Type* getType();

	void setType(Type* type);

	AddOn* getAddOns();

	void setAddOns(AddOn* addOns);

	/**
	 * @brief The clone function will clone the Factory object and return it
	 * @author Antwi-Antwi
	 * @return Factory This is the cloned object
	 */
	virtual Factory* clone() = 0;
};

#endif
