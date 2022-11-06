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
        static vector<string> keyPointInformation;
        static vector<string> entityMovementInformation;

        static void clearStats();
        static string toString();
};

#endif