#include "Country.h"

Country::Country(string name) {
	this->name = name;
	id = rand();
}

Country* Country::clone() {
	return new Country(*this);
}
