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
	
	throw "Not yet implemented";
}
