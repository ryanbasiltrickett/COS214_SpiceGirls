#include "Passive.h"

using namespace std;

Passive::Passive() {

}

void Passive::performStrat(KeyPoint* keyPoint, Alliance* alliance) {
	
	int randomNumber = (rand() % 10) + 5;
	keyPoint->moveEntitiesOutOf(alliance, randomNumber);
}
