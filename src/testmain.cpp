#include "NegotiatorTest.h"
#include "AddOnTest.h"
#include <gtest/gtest.h>
#include "EasySetup.h"

int main(int argc, char **argv) {
    EasySetup* easySetup = new EasySetup();
    easySetup->setupSimulation();

    // testing::InitGoogleTest(&argc, argv);
    // return RUN_ALL_TESTS();
}