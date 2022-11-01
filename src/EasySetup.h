#ifndef EASYSETUP_H
#define EASYSETUP_H
#include <string>
#include "WarEngine.h"
#include "SaveArchive.h"
#include "WarTheatre.h"
#include "KeyPoint.h"
#include <vector>
#include <iostream>
#include <string.h>
#include "Alliance.h"

class EasySetup
{
    private:
        WarEngine* warEngine;
        SaveArchive* saveArchive;
        WarTheatre** mainBattleGround;  
        WarTheatre** battleGrounds;
        vector<int> numKeyPoints;
        Alliance* alliance;
        int sizeOfGrounds;

    public:
        void setupSimulation();
        void runSimulation();
        void loadPrevSave();
        void loadSpecificSave(std::string name);
        void saveSimulationSetup();
};

#endif