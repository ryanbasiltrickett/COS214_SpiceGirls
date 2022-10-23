#include "Passive.h"

using namespace std;

Passive::Passive() {
	
	this->strategy = "Passive";
}

void Passive::void performStrat(KeyPoint* keyPoint, Alliance* alliance) {
	
	keyPoint->attack(alliance);
}
