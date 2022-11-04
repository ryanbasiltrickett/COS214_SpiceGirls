#include "Defensive.h"

Defensive::Defensive() {

}

void Defensive::performStrat(KeyPoint* keyPoint, Alliance* alliance) {

    int randomNumber = (rand() % 5) + 1;
    keyPoint->moveEntitiesInto(alliance, randomNumber);
}

Strategy* Defensive::clone() {
    return new Defensive();
}