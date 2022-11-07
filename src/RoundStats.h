#ifndef ROUNDSTATS_H
#define ROUNDSTATS_H

#include <vector>
#include <string>

using namespace std;

class RoundStats {
    public:
        static int numEntitiesCreated;
        static int numEntitiesDestroyed;
        static int damageDone;
        static int numLosingPoints;
        static int numContestedPoints;
        static int numWinningPoints;
        static vector<string> keyPointInformation;

        static void clearStats();
        static string toString();
};

#endif