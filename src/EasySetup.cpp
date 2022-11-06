#include "EasySetup.h"
#include <string.h>
#include "Passive.h"
#include "Aggressive.h"
#include "Defensive.h"

void EasySetup::setupSimulation() {
    while (true)
    {
        cout << "Load simulation (L): " << endl;
        cout << "New Simulation (N): " << endl;
        string selectedOption;
        cin >> selectedOption;

        if(toupper(selectedOption[0]) == 'L')
        {
            string saveName;
            cout << "Please enter the name of the save to be re-simulated" << endl;
            getline(cin, saveName); // getting the name of the save-archive
            try {
                this->loadSpecificSave(saveName); // loading the save-archive
                return; // will return if the above the function does not throw an exception  
            } catch(const std::exception& exception) {
                cout << "Error: " << exception.what() << endl;

                if (strcmp(exception.what(), "Save archive is empty") == 0) {
                    cout << "Please create new simulation" << endl;
                    goto setup;
    
                } else if (strcmp(exception.what(), "No save with given name exists") == 0) {

                    cout << "Please enter the correct name of save-archive and try again or create new simulation" << endl;
                }
            }
        
        } else if(toupper(selectedOption[0]) == 'N') {
            // setting up a new simulation
            goto setup;
        } else {
            cout << "Incorrect input: Please enter (L) or (N)" << endl;
        }
    }
    
    setup:
        // Creating alliances and generals
        int numAlliesAndGenerals;
        cout << "Enter number of alliances: ";
        cin >> numAlliesAndGenerals;

        Alliance** alliances = new Alliance*[numAlliesAndGenerals];
        General** generals = new General*[numAlliesAndGenerals];
        
        int numCountries,
            numFactories;
        string  countryName,
                factoryType,
                selectedFactory,
                selectedAddOn;
        Country* country;
        Type* type;
        AddOn* addOn;
        Factory* factory;

        for (int i = 0; i < numAlliesAndGenerals; i++) {
            alliances[i] = new Alliance;

            cout << "Enter number of countries for Alliance " << alliances[i]->getID() << ": ";
            cin >> numCountries;

            for (int k = 0; k < numCountries; k++) {
                cout << "Enter name of county " << k+1 << ": ";
                getline(cin, countryName);
                country = new Country(countryName);
                alliances[i]->addCountry(country);
            }

            cout << "Enter number of factories for Alliance " << alliances[i]->getID() << ": ";
            cin >> numFactories;

            for (int k = 0; k < numFactories; k++) {
                retryType:
                cout << "Factory " << k+1 << " is of type Aquatic(Q), Aerial(E), or Terrain(T) : ";
                cin >> factoryType;

                if (toupper(factoryType[0]) == 'Q') {
                    type = new AerialType;
                } else if (toupper(factoryType[0]) == 'E') {
                    type = new AerialType;
                } else if (toupper(factoryType[0]) == 'T') {
                    type = new TerrainType;
                } else {
                    cout << "Invalid type input! Try again" << endl;
                    goto retryType;
                }

                retryAddOn:
                cout << "Select AddOn for factory " << k+1 << " Armour(A) or Piercing(P) : ";
                getline(cin, selectedAddOn);
                if (toupper(selectedAddOn[0]) == 'A') {
                    int value;
                    cout << "Enter armour value: ";
                    cin >> value;
                    addOn = new Armour(value);
                } else if (toupper(selectedAddOn[0]) == 'P') {
                    int value;
                    cout << "Enter piercing value: ";
                    cin >> value;
                    addOn = new Piercing(value);
                } else {
                    cout << "Invalid AddOn input! Try again" << endl;
                    goto retryAddOn;
                }
                
                retryFactory:
                cout << "Which factory is factory " << k+1 << " Vehicle(V), Personnel(P), or Support(S) : ";
                getline(cin, selectedFactory);
                if (toupper(selectedFactory[0]) == 'V') {
                    factory = new VehicleFactory(type, addOn);
                } else if (toupper(selectedFactory[0]) == 'P') {
                    factory = new PersonnelFactory(type, addOn);
                } else if (toupper(selectedFactory[0]) == 'S') {
                    factory = new SupportFactory(type, addOn);
                } else {
                    cout << "Invalid factory input! Try again" << endl;
                    goto retryFactory;
                }
                
                alliances[i]->addFactory(factory);
            } 
            
            string selectedStrat;
            Strategy* strat;
            
            retryStrat:
            cout << "What is this Alliances generals strategy Passive(P), Defensive(D), or Aggressive(A) : ";
            getline(cin, selectedStrat);
            if (toupper(selectedStrat[0]) == 'P') {
                strat = new Passive();
            } else if (toupper(selectedStrat[0]) == 'D') {
                strat = new Defensive();
            } else if (toupper(selectedStrat[0]) == 'A') {
                strat = new Aggressive();
            } else {
                cout << "Invalid strategy input! Try again" << endl;
                goto retryStrat;
            }
            
            generals[i] = new General(alliances[i], strat);
        }
        
        int factoryRun;
        cout << "How many entities would you like to create? ";
        cin >> factoryRun;
        for (int i = 0; i < factoryRun; i++) {
            alliances[i]->runFactories();
        }

        // Creating main WarTheatre
        WarTheatre* mainBattleGround;
        cout << "Creating the main battle ground" << endl;
        string battleGroundName;
        cout << "Set main battle ground's name: ";
        getline(cin, battleGroundName);
        mainBattleGround = new WarTheatre(battleGroundName);

        int sizeOfGrounds;
        cout << "Enter number of battle grounds in " << battleGroundName << " battle ground: ";
        cin >> sizeOfGrounds;
        WarTheatre** battleGrounds = new WarTheatre*[sizeOfGrounds];
        
        // Creating sub WarTheatres
        for (int i = 0; i < sizeOfGrounds; i++) {
            battleGroundName.clear();
            cout << "Set battle ground " << i+1 << "'s name: ";
            getline(cin, battleGroundName);
            battleGrounds[i] = new WarTheatre(battleGroundName);
        }

        vector<int> numKeyPoints;
        int numKeyPoint = 0;

        for (int i = 0; i < sizeOfGrounds; i++) {
            cout << "Enter number of key points in " << battleGrounds[i]->getAreaName() << " battle ground: ";
            cin >> numKeyPoint;
            numKeyPoints.push_back(numKeyPoint);
            numKeyPoint = 0;
        }

        KeyPoint* keyPoint;
        string keyPointName;
        int numEntitiesInKeyPt;

        // Creating KeyPoints for the sub WarTheatres
        for (int i = 0; i < sizeOfGrounds; i++) {
            numKeyPoint = numKeyPoints[i];
            cout << "For " << battleGrounds[i]->getAreaName() << "'s key points" << endl;
        
            for (int k = 0; k < numKeyPoint; k++) {
                cout << "Set key point" << i+1 << "'s name: ";
                getline(cin, keyPointName);
                keyPoint = new KeyPoint(keyPointName);
           
                for (int a = 0; a < numAlliesAndGenerals; a++) {
                    tryAgain:
                    cout << "There are " << alliances[a]->numRemainingEntities() << " for Alliance " << a+1 << endl;
                    cout << "How many would you like to place in " << keyPointName << " keypoint? ";
                    cin >> numEntitiesInKeyPt;

                    if (alliances[a]->numRemainingEntities() > 0 && alliances[a]->numRemainingEntities() < numEntitiesInKeyPt) {
                        cout << "You selected more than the available amount. Try again " << endl;
                        goto tryAgain;
                    }else if (alliances[a]->numRemainingEntities() <= 0) {
                        break;;
                    }else {
                        keyPoint->moveEntitiesInto(alliances[a], numEntitiesInKeyPt);
                    }
                }
                
                battleGrounds[i]->addArea(keyPoint);
            }

            mainBattleGround->addArea(battleGrounds[i]);
        }
        
        for (int i = 0; i < numAlliesAndGenerals; i++) {
            mainBattleGround->addGeneral(generals[i]);
        }

        warEngine->setWarTheatre(mainBattleGround); 
}

void EasySetup::runSimulation() {

    warEngine->simulate();
}

void EasySetup::saveSimulationSetup() {

    // Getting the name of the save
    cout << "Please enter name of save: ";
    string saveName;
    getline(cin, saveName);

    // saving the current state of the simulation
    saveArchive->addNewSave(saveName, warEngine->saveState());

}

void EasySetup::loadPrevSave() {

    try{
        WarEngineMemento* saveFile = saveArchive->getLastSave();

        warEngine->loadSave(saveFile);
    }
    catch(const std::exception& error){

        std::cerr << error.what() << "\n"; 
    
    }
}

void EasySetup::loadSpecificSave(string name) {

    try{
        
        WarEngineMemento* saveFile = saveArchive->getSave(name);

        warEngine->loadSave(saveFile);
    }
    catch(const std::out_of_range& range_error){

        std::cerr << range_error.what() << "\n"; 
    
    }
}
