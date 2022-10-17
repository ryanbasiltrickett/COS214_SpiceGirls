#ifndef SUPPORTFACTORY_H
#define SUPPORTFACTORY_H

class SupportFactory : Factory {


public:
	SupportFactory();

	Support* createEntity(Alliance* alliance);

	Factory* clone();
};

#endif
