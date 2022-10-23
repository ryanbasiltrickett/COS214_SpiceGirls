#ifndef ALLIANCE_H
#define ALLIANCE_H

class Alliance {

private:
	int aID;
	vector<Factory*> production;
	Negotiator* negotiator;
	vector<Country*> members;
	bool active;

public:
	/**
	 * @brief Instantiates the Alliance
	 */
	Alliance();

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
	void setNegotiator(Negotiator* n);

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
	 * @return bool
	 */
	bool addCountry(Country* nation);

	/**
	 * @brief Considers to stop war with the allaince passed into the function header
	 *
	 * Preconditions:
	 *  - id must be an integer
	 *
	 * Postconditions:
	 *  - Result of consideration returned in the form of a bool
	 *
	 * @param id must be an int
	 * @return bool
	 */
	bool considerPeace(int id);

	/**
	 * @brief Adds a factory into the production vector which holds factories
	 *
	 * Preconditions:
	 *  - f must be an Factory*
	 *
	 * Postconditions:
	 *  - Factory is added to the production vector
	 *
	 * @param f must be an Factory*
	 * @return void
	 */
	void addFactory(Factory* f);

	/**
	 * @brief Makes the current alliance give up of the war by surrendering
	 *
	 * Postconditions:
	 *  - Sets the active variable to false
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
	bool offPeace();

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
	 * @brief Sets the passed in parameter
	 * 
	 * PreCondtions:
	 * - ID must be an int
	 * 
	 * PostConditions:
	 * - The ID is set to the passed in the  parameter
	 * 
	 * @param ID 
	 */
	void setID(int ID);

	/**
	 * @brief Sets variable active to the passed in parameter
	 * 
	 * PreCondtions:
	 * - avtive must be an a bool
	 * 
	 * PostConditions:
	 * - The varriable active is set to the passed in the parameter
	 * 
	 * @param ID a bool parameter
	 */
	void setActiveStatus(bool active);


};

#endif
