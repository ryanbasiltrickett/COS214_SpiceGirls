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

int main(int argc, char **argv) {
    // EasySetup* easySetup = new EasySetup();
    // easySetup->setupSimulation();

    setupWarEngine();
    
    WarEngine::getInstance().simulate();

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}