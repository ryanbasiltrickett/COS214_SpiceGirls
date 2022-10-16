#ifndef PERSONALFACTORY_H
#define PERSONALFACTORY_H

class PersonalFactory : Factory {


public:
	PersonalFactory();

	Personal* createEntity(Alliance* alliance);

	Factory* clone();
};

#endif
