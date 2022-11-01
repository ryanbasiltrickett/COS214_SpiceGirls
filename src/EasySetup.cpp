#include "EasySetup.h"

using namespace std;

void EasySetup::setupSimulation(){

}

void EasySetup::runSimulation() {

    warEngine->simulate();
}

void EasySetup::loadPrevSave() {

}

void EasySetup::loadSpecificSave(string name) {


}

void EasySetup::saveSimulationSetup() {

    // Getting the name of the save
    cout << "Please enter name of save: ";
    string saveName;
    getline(cin, saveName);

    // saving the current state of the simulation
    saveArchive->addNewSave(saveName, warEngine->saveState());

}
