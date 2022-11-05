#include "Country.h"

using namespace std;

Country::Country(){}
	

Country* Country::clone(){
	
	Country* countryClone = new Country();
	countryClone->setID(this->id);
	countryClone->setName(this->name);

	return countryClone;
}

void Country::setID(int id){
	this->id = id;
}

void Country::setName(string name){
	this->name = name;
}

string Country::getName() const{
	return this->name;
}

int Country::getID() const{
	return this->id;
}


