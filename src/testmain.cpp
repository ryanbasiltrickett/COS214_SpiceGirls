#include "NegotiatorTest.h"
#include "AddOnTest.h"
#include <gtest/gtest.h>
#include "EasySetup.h"
#include "WarEngine.h"
#include "KeyPoint.h"
#include "Negotiator.h"
#include <iostream>

void setupWarEngine() {
    Alliance* a1 = new Alliance();
    a1->addCountry(new Country("Germany"));

    Alliance* a2 = new Alliance();
    a2->addCountry(new Country("Finland"));

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

    for (int i = 0; i < 100; i++) {
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

    WarTheatre* w = new WarTheatre("Europe");
    w->addArea(k1);
    w->addArea(k2);
    w->addArea(k3);

    WarEngine::getInstance().setWarTheatre(w);
}

void showTests(int &argc, char** argv){}

int startWarEngine(int &argc, char** argv){

    bool continueLoop = true;

    while(continueLoop){
        
        cout << "Welcome to the War Simulator!\n" << "Please select an option:" << endl;
        
        cout << "1) Run Google Tests\n" << "2) Setup Simulation\n" << "3)Quit\n" << endl;

        std::string userStringInput;

        cin >> userStringInput;

        int userOption = stoi(userStringInput);
        
        switch(userOption){
            case 1:
                testing::InitGoogleTest(&argc, argv);
                RUN_ALL_TESTS();
                cout << "\n" << endl;
                break;
            case 2:
                setupWarEngine();
                WarEngine::getInstance().simulate();
                cout << "\n" << endl;
                break;
            case 3:
                continueLoop = false;
                cout << "\n" << endl;
                break;
            default:
                cout << "Please try again. Enter a valid option.\n\n" << endl;
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