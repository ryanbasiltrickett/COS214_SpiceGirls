#include "RoundStats.h"

int RoundStats::numEntitiesCreated = 0;
int RoundStats::numEntitiesDestroyed = 0;
int RoundStats::damageDone = 0;
int RoundStats::numLosingPoints = 0;
int RoundStats::numContestedPoints = 0;
int RoundStats::numWinningPoints = 0;
vector<string> RoundStats::keyPointInformation;
vector<string> RoundStats::entityMovementInformation;

void RoundStats::clearStats() {
    numEntitiesCreated = 0;
    numEntitiesDestroyed = 0;
    damageDone = 0;
    numLosingPoints = 0;
    numContestedPoints = 0;
    numWinningPoints = 0;
    keyPointInformation.clear();
    entityMovementInformation.clear();
}

string RoundStats::toString() {
    string out = "Number of Key Points Winning/Contested/Losing: " + to_string(numWinningPoints) + "/" + to_string(numContestedPoints) + "/" + to_string(numLosingPoints) + "\n";
    out += "Number of Entities Created: " + to_string(numEntitiesCreated) + "\n";
    out += "Number of Entities Destroyed by Alliance: " + to_string(numEntitiesDestroyed) + "\n";
    out += "Damage Given by Alliance: " + to_string(damageDone) + "\n";

    out += "\nKey Point Round Information:\n";
    for (int i = 0; i < keyPointInformation.size(); i++)
        out += keyPointInformation[i] + "\n";

    out += "\nMovement Round Information:\n";
    for (int i = 0; i < entityMovementInformation.size(); i++)
        out += entityMovementInformation[i] + "\n";

    return out;
}