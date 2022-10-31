#include "EasySetup.h"

void EasySetup::setupSimulation {

}

void EasySetup::runSimulation {

}

void EasySetup::loadPrevSave {

    try{
        WarEngineMemento* saveFile = SaveArchive->getLastSave();

        WarEngine->loadSave(saveFile->getState());
    }
    catch(const std::exception& error){

        std::cerr << error.what() << "\n"; 
    
    }
}

void EasySetup::loadSpecificSave(string name) {

    try{
        
        WarEngineMemento* saveFile = SaveArchive->getSave(name);

        WarEngine->loadSave(saveFile->getState());
    }
    catch(const std::out_of_range& range_error){

        std::cerr << range_error.what() << "\n"; 
    
    }
}

void EasySetup::sameSimulationSetup() {

}
