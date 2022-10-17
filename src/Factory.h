#ifndef FACTORY_H
#define FACTORY_H

class Factory {

private:
	Type* type;
	addOn* addOns;

public:
	Factory();

	void ~Factory();

	virtual Entity* createEntity(Alliance* alliance) = 0;

	Type* getType();

	void setType(Type* type);

	addOn* getAddOns();

	void setAddOns(addOn* addOns);

	virtual Factory* clone() = 0;
};

#endif
