#include "Negotiator.h"

Negotiator::Negotiator() {}

Negotiator::~Negotiator() {
	alliance.clear();
}

bool Negotiator::sendPeace(int id) {
	
	for (int yy = 0; yy < alliance.size(); yy++)
	{
		if (alliance[yy]->getID() != id && alliance[yy]->considerPeace(id) == false)
			return false; // There is at least one enemy alliance that does not want the peace deal
	
	}

	return true; // All the alliances being fought against agreed to the peace deal
}

void Negotiator::removeAlliance(int id) {
	
	for (int xx = 0; xx < alliance.size(); xx++)
	{
		if (alliance[xx]->getID() == id)
			alliance.erase( alliance.begin() + xx ); // Removes the specific alliance from this negotiator
	
	}
	
}

void Negotiator::addAlliance(Alliance* newAlliance) {
	
	alliance.push_back(newAlliance);
}

Negotiator* Negotiator::clone() {
	
	throw "Not yet implemented";
}
