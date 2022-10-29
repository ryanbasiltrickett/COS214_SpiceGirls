#ifndef EASYSETUP_H
#define EASYSETUP_H
#include <string>
#include "WarEngine.h"
#include "SaveArchive.h"

class EasySetup
{
    private:
        WarEngine* warEngine;
        SaveArchive* saveArchive;

    public:
        void setupSimulation;
        void runSimulation;
        void loadPrevSave;
        void loadSpecificSave(string name);
        void sameSimulationSetup();
};

#endif