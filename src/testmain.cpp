#include "NegotiatorTest.h"
#include "AddOnTest.h"
#include <gtest/gtest.h>
#include "EasySetup.h"
#include "WarEngine.h"
#include "KeyPoint.h"
#include "Negotiator.h"
#include "Aggressive.h"
#include "Defensive.h"
#include "Passive.h"
#include "Strategy.h"
#include <iostream>

void setupWarEngine() {
    Alliance* a1 = new Alliance();
    a1->addCountry(new Country("Germany"));
    a1->addCountry(new Country("Austria"));
    a1->addCountry(new Country("Italy"));

    Alliance* a2 = new Alliance();
    a2->addCountry(new Country("Finland"));
    a2->addCountry(new Country("France"));
    a2->addCountry(new Country("UK"));

    Negotiator* n = new Negotiator();
    n->addAlliance(a1);
    n->addAlliance(a2);
    a1->setNegotiator(n);
    a2->setNegotiator(n);

    WarEngine::getInstance().addAlliance(a1);
    WarEngine::getInstance().addAlliance(a2);

    KeyPoint* k1 = new KeyPoint("West");
    KeyPoint* k2 = new KeyPoint("North");
    KeyPoint* k3 = new KeyPoint("East");

    for (int i = 0; i < 200; i++) {
        Personnel* p1 = new Personnel(NULL);
        p1->setAlliance(a1);
        k1->addEntity(p1->clone());
        k2->addEntity(p1->clone());
        k3->addEntity(p1->clone());

        Personnel* p2 = new Personnel(NULL);
        p2->setAlliance(a2);
        k1->addEntity(p2->clone());
        k2->addEntity(p2->clone());
    }

    Strategy** strats = new Strategy* [3];
    strats[0] = new Aggressive();
    strats[1] = new Defensive();
    strats[2] = new Passive();

    General* g1 = new General (a1,strats[0]);
    General* g2 = new General (a2,strats[1]);

    WarTheatre* w = new WarTheatre("Europe");
    w->addArea(k1);
    w->addArea(k2);
    w->addArea(k3);

    //w->addGeneral(g1);
    //w->addGeneral(g2);

    WarEngine::getInstance().setWarTheatre(w);
}

void showTests(int &argc, char** argv){}

int startWarEngine(int &argc, char** argv){

    bool continueLoop = true;
    bool correctInput;
    int userOption;

    cout << "Welcome to the War Simulator!\n";

    while(continueLoop){
        
        cout << "Please select an option:" << endl;
        
        cout << "1) Run Google Tests\n" << "2) Setup Simulation\n" << "3) Quit" << endl;

        std::string userStringInput;
        correctInput = false;

        while (correctInput == false)
        {
            cout << "\nInput: ";

            cin >> userStringInput;

            try
            {
                userOption = stoi(userStringInput);
                correctInput = true;
            }
            catch(const std::exception& e)
            {
                cout << "Please enter a digit listed above" << endl;
            }
            
        }
        
        switch(userOption){
            case 1:
                testing::InitGoogleTest(&argc, argv);
                RUN_ALL_TESTS();
                cout << "\nYou have successfully run tests on the War Simulator!\n" << endl;
                break;
            case 2:
                setupWarEngine();
                WarEngine::getInstance().simulate();
                cout << "\nYou have successfully gone through a simulation of the War Engine!\n" << endl;
                break;
            case 3:
                continueLoop = false;
                cout << "\nThank You For Using Our Simulation. Stay Spicy :)" <<endl;
                break;
            default:
                cout << "Please try again. Enter a valid option.\n" << endl;
        }
    }

        return 0;

}

int main(int argc, char **argv) {
    //setupWarEngine();
    
    //WarEngine::getInstance().simulate();

    //testing::InitGoogleTest(&argc, argv);
    //return RUN_ALL_TESTS();
    startWarEngine(argc, argv);

    return 0;
}