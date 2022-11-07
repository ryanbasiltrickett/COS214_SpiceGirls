#ifndef EASYSETUP_H
#define EASYSETUP_H
#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include "SaveArchive.h"

using namespace std;

class EasySetup
{
    private:
        SaveArchive* saveArchive;

    public:
        EasySetup();
        void setupSimulation();
        void runSimulation();
        void loadPrevSave();
        void loadSpecificSave(std::string name);
        void saveSimulationSetup();
};

#endif