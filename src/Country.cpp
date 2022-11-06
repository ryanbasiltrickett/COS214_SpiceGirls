#include "Country.h"

using namespace std;

Country::Country(std::string name){
	this->name = name;
	this->id = rand() % 1000;
}
	

Country* Country::clone(){
	return new Country(this->name);
}

string Country::getName() const{
	return this->name;
}

int Country::getID() const{
	return this->id;
}


