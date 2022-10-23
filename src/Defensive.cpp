#include "Defensive.h"

Defensive::Defensive() {
	// TODO - implement Defensive::Defensive
	this->strategy = "Defensive";
}

void Defensive::performStrat(KeyPoint* keyPoint, Alliance* alliance) {
	// TODO - implement Defensive::performStrat
	keyPoint->attack(alliance);
}
