#include "Passive.h"

using namespace std;

Passive::Passive() {
	
	this->strategy = "Passive";
}

void Passive::performStrat(KeyPoint* keyPoint, Alliance* alliance) {
	
	alliance->surrender();
	keyPoint->notify()

}
