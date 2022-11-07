#ifndef ALLIANCE_H
#define ALLIANCE_H
#include "Country.h"
#include "Factory.h"
#include "Country.h"
#include <vector>

class Negotiator;
class Entity;

using namespace std;

class Alliance {

private:
	static int totalNum;
	int aID;
	vector<Factory*> production;
	Negotiator* negotiator;
	vector<Country*> members;
	int active;
	vector<Entity*> reserveEntities;

public:
	/**
	 * @brief Instantiates the Alliance
	 */
	Alliance();

	/**
	 * @brief Instantiates the Alliance
	 */
	Alliance(Alliance& alliance);

	/**
	 * @brief Destructor for the Alliance object
	 */
	~Alliance();

	/**
	 * @brief Sets the entity negotiator
	 *
	 * Preconditions:
	 *  - n must be an Negotiator*
	 *
	 * Postconditions:
	 *  - Sets the negotiator of the Alliance object
	 *
	 * @param n must be a Negotiator*
	 * @return void
	 */
	void setNegotiator(Negotiator* newNegotiator);

	/**
	 * @brief Adds a country into the members vector which holds countries
	 *
	 * Preconditions:
	 *  - nation must be an Country*
	 *
	 * Postconditions:
	 *  - Country is added to the members vector
	 *
	 * @param nation must be an Country*
	 * @return void
	 */
	void addCountry(Country* nation);

	/**
	 * @brief Return a given number of reserve entites vector
	 *
	 * Precondition:
	 *  - number must be an int
	 * 
	 * Postconditions:
	 *  - Return a given number of reserve entities
	 *  - If not enough reseverves return amount available
	 *
	 * @param number must be an int
	 * @return vector<Entity*>*
	 */
	vector<Entity*> getReserveEntities(int number);

	/**
	 * @brief Adds a entity to the reserve entities
	 *
	 * Preconditions:
	 *  - nation must be an Entity*
	 *
	 * Postconditions:
	 *  - Entity is added to the reserveEntities vector
	 *
	 * @param entity must be an Entity*
	 * @return void
	 */
	void addReserveEntity(Entity* entity);

	/**
	 * @brief Considers to stop war with the allaince passed into the function header
	 *
	 * Preconditions:
	 *  - id must be an integer
	 *
	 * Postconditions:
	 *  - Result of consideration returned in the form of a bool
	 *
	 * @return bool
	 */
	bool considerPeace();

	/**
	 * @brief Adds a factory into the production vector which holds factories
	 *
	 * Preconditions:
	 *  - f must be an Factory*
	 *
	 * Postconditions:
	 *  - Factory is added to the production vector
	 *
	 * @param factory must be a Factory*
	 * @return void
	 */
	void addFactory(Factory* factory);

	/**
	 * @brief Makes the current alliance give up of the war by surrendering
	 *
	 * Postconditions:
	 *  - Sets the active variable to false
	 *  - Removes this alliance from the Negotiator vector
	 *
	 * @return void
	 */
	void surrender();

	/**
	 * @brief Returns Alliance's aID
	 *
	 * Postconditions:
	 *  - Returns the aID
	 *
	 * @return int The ID of the Alliance object
	 */
	int getID();

	/**
	 * @brief Offers peace to stop war with the alliance fighting against using sendPeace
	 *
	 * Postconditions:
	 *  - Result of consideration returned from the enemy alliance which considered peace
	 *
	 * @return bool
	 */
	bool offerPeace();

	/**
	 * @brief Instantiates and returns a clone of the current Alliance
	 *
	 * Postconditions:
	 *  - Returns the clone of the current Alliance
	 *
	 * @return Alliance* The alliance clone
	 */
	Alliance* clone();

	/**
	 * @brief Sets variable active to the passed in parameter
	 * 
	 * PreCondtions:
	 * - active must be an a bool
	 * 
	 * PostConditions:
	 * - The varriable active is set to the passed in the parameter
	 * 
	 * @param ID a bool parameter
	 */
	void setActiveStatus(int active);

	/**
	 * @brief Get the active state of the Alliance
	 * 
	 * PostConditions:
	 * - returns an active variable
	 * 
	 * @return int the active variable
	 */
	int getActive();

	/**
	 * @brief Gets the number of the remaining number of entities
	 * 
	 * PostConditions:
	 * - Returns an int
	 * 
	 * @return int The number of entities remaining
	 * 
	 */
	int numRemainingEntities();

	/**
	 * @brief Will create reserve Entities
	 * 
	 * PostConditions
	 * - will create reserve entities for later use
	 * 
	 * @return void
	 */
	void runFactories();
};

#endif