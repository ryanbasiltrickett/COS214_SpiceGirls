#ifndef COUNTRY_H
#define COUNTRY_H

class Country {

private:
	std::string name;
	int id;

public:
	Country();

	Country* clone();
};

#endif
