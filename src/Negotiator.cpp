#include "Negotiator.h"

Negotiator::Negotiator() {
	
}

bool Negotiator::sendPeace(int id) {
	// TODO - implement Negotiator::sendPeace
	throw "Not yet implemented";
}

void Negotiator::removeAlliance(Alliance* alliance) {
	

}

void Negotiator::addAlliance(Alliance* alliance) {

	this->alliances.push_back(alliance);
}

Negotiator* Negotiator::clone() {
	
	Negotiator* negotiatorClone = new Negotiator();

	for(int i = 0; i < this->alliances.size(); ++i)
		negotiatorClone->addAlliance(this->alliances[i]);

		return allianceClone;
}
