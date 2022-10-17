#ifndef PERSONALFACTORY_H
#define PERSONALFACTORY_H
#include "Personnel.h"
#include "Alliance.h"
#include "Entity.h"
#include "Factory.h"
class PersonnelFactory : public Factory {


public:
	PersonnelFactory();

	Entity* createEntity(Alliance* alliance);

	/**
	 * @brief  This function will clone the CommandCenter and return a pointer to be used in the Memento
	 * 
	 * @author Antwi-Antwi
	 * 
	 * @return Factory* This is a pointer to the cloned PersonnelFactory object
	 */
	Factory* clone();
};

#endif
