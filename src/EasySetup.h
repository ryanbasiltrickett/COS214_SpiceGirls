#ifndef EASYSETUP_H
#define EASYSETUP_H
#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include "Alliance.h"
#include "Country.h"
#include "AquaticType.h"
#include "AerialType.h"
#include "TerrainType.h"
#include "Piercing.h"
#include "Armour.h"
#include "PersonnelFactory.h"
#include "VehicleFactory.h"
#include "SupportFactory.h"
#include "KeyPoint.h"
#include "WarTheatre.h"
#include "WarEngine.h"
#include "SaveArchive.h"

using namespace std;

class EasySetup
{
    private:
        WarEngine* warEngine;
        SaveArchive* saveArchive;
    
    public:
        void setupSimulation();
        void runSimulation();
        void loadPrevSave();
        void loadSpecificSave(string name);
        void saveSimulationSetup();
};

#endif