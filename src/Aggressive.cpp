#include "Aggressive.h"

Aggressive::Aggressive() {

}

void Aggressive::performStrat(KeyPoint* keyPoint, Alliance* alliance) {

	int randomNumber = (rand() % 10) + 5;
	keyPoint->moveEntitiesInto(alliance, randomNumber);
}

