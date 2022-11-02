#include "Negotiator.h"
#include<bits/stdc++.h>

Negotiator::Negotiator() {}

Negotiator::~Negotiator() {
	alliances.clear();
}

bool Negotiator::sendPeace(Alliance* offerAlliance) {
	
	int id = offerAlliance->getID();
	for (int yy = 0; yy < alliances.size(); yy++)
	{
		if (alliances[yy]->getID() != id && alliances[yy]->considerPeace(id) == false)
			return false; // There is at least one enemy alliances that does not want the peace deal
	
	}

	return true; // All the alliances being fought against agreed to the peace deal
}

void Negotiator::removeAlliance(Alliance* oldAlliance) {
	
	for (int xx = 0; xx < alliances.size(); xx++)
	{
		if (alliances[xx]->getID() == oldAlliance->getID())
			alliances.erase( alliances.begin() + xx ); // Removes the specific alliances from this negotiator
	}
	
}

void Negotiator::addAlliance(Alliance* newAlliance) {
    
	if (std::find(alliances.begin(), alliances.end(), newAlliance) != alliances.end()) 
        alliances.push_back(newAlliance);
	
}

int Negotiator::getNumAlliances() {
	return this->alliances.size();
}

Negotiator* Negotiator::clone() {
	
	throw "Not yet implemented";
}

