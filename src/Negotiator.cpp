#include "Negotiator.h"

Negotiator::Negotiator() {}

Negotiator::~Negotiator() {
	alliance.clear();
}

bool Negotiator::sendPeace(Alliance* offerAlliance) {
	
	int id = offerAlliance->getID();
	for (int yy = 0; yy < alliance.size(); yy++)
	{
		if (alliance[yy]->getID() != id && alliance[yy]->considerPeace(id) == false)
			return false; // There is at least one enemy alliance that does not want the peace deal
	
	}

	return true; // All the alliances being fought against agreed to the peace deal
}

void Negotiator::removeAlliance(Alliance* oldAlliance) {
	
	for (int xx = 0; xx < alliance.size(); xx++)
	{
		if (alliance[xx]->getID() == oldAlliance->getID())
			alliance.erase( alliance.begin() + xx ); // Removes the specific alliance from this negotiator
	
	}
	
}

void Negotiator::addAlliance(Alliance* newAlliance) {
	
	if (isFound(newAlliance) != true)
		alliance.push_back(newAlliance);
	
}

Negotiator* Negotiator::clone() {
	
	throw "Not yet implemented";
}

bool isFound(Alliance* newAlliance) {
	
	for (int qq = 0; qq < alliance.size(); qq++)
	{
		if (alliance[qq]->getID() == newAlliance->getID())
			return true; 
	
	}

	return false; // newAlliance is not in vector already
}
