#include <stdexcept>
#include "AddOn.h"
#include "Piercing.h"
#include "Armour.h"
#include "Personnel.h"
#include "gtest/gtest.h"

namespace {

    // Tests General AddOn Functionality

    // Tests AddOn setValue()
    // ============ Precondition Testing ============
    // Test Precondition Negative
    TEST(AddOnSetValueTest, TestPreconditionNegative) {
        Armour* a = new Armour();
        try {
            a->setValue(-5);
            FAIL();
        } catch (std::invalid_argument& err) {
            EXPECT_EQ(err.what(), std::string("value must be greater than zero"));
        } catch (...) {
            FAIL();
        }
    }

    // Test Precondition Positive
    TEST(AddOnSetValueTest, TestPreconditionPositive) {
        Armour* a = new Armour();
        a->setValue(5);
        EXPECT_EQ(5, a->getValue());
    }

    // Test Precondition Bounds
    TEST(AddOnSetValueTest, TestPreconditionBounds) {
        Armour* a = new Armour();
        try {
            a->setValue(0)
            FAIL();
        } catch (std::invalid_argument& err) {
            EXPECT_EQ(err.what(), std::string("value must be greater than zero"));
        } catch (...) {
            FAIL();
        }
    }

    // ============ Positive Testing ============
    // Test Preconditions Bounds
    TEST(AddOnSetValueTest, PositiveTesting) {
        Armour* a = new Armour();
        a->setValue(5);
        EXPECT_EQ(5, a->getValue());
        a->setValue(10);
        EXPECT_EQ(10, a->getValue());
        a->setValue(20);
        EXPECT_EQ(20, a->getValue());
        a->setValue(55);
        EXPECT_EQ(55, a->getValue());
        a->setValue(3);
        EXPECT_EQ(3, a->getValue());
        a->setValue(100);
        EXPECT_EQ(100, a->getValue());
    }
    
    // Tests AddOn setEntity()
    // ============ Positive Testing ============
    // Test Preconditions Bounds
    TEST(AddOnSetEntityTest, PositiveTesting) {
        Armour* a = new Armour();
        Personnel* p = new Personnel(); 
        a->setEntity(p);
        EXPECT_EQ(p, a->getEntity());
    }
    
    // Tests Armour AddOn Functionality

    // Tests Armour takeDamage()
    // ============ Precondition Testing ============
    // Test Precondition Negative
    TEST(ArmourTakeDamageTest, TestPreconditionNegative) {
        Armour* a = new Armour();
        try {
            a->takeDamage(-5);
            FAIL();
        } catch (std::invalid_argument& err) {
            EXPECT_EQ(err.what(), std::string("damage must be greater than zero"));
        } catch (...) {
            FAIL();
        }
    }

    // Test Precondition Positive
    TEST(ArmourTakeDamageTest, TestPreconditionPositive) {

    }

    // Test Precondition Bounds
    TEST(ArmourTakeDamageTest, TestPreconditionBounds) {
        Armour* a = new Armour();
        try {
            a->takeDamage(0);
            FAIL();
        } catch (std::invalid_argument& err) {
            EXPECT_EQ(err.what(), std::string("damage must be greater than zero"));
        } catch (...) {
            FAIL();
        }
    }

    // ============ Positive Testing ============
    // Test Preconditions Bounds
    TEST(ArmourTakeDamageTest, PositiveTesting) {
        
    }
    
    // Tests Armour dealDamage()
    // ============ Positive Testing ============
    // Test Preconditions Bounds
    TEST(ArmourDealDamageTest, PositiveTesting) {
        
    }

    // Tests Piercing AddOn Functionality
    
    // Tests Piercing dealDamage()
    // ============ Positive Testing ============
    // Test Preconditions Bounds
    TEST(PiercingDealDamageTest, PositiveTesting) {
        
    }
    
    // Tests Piercing takeDamage()
    // ============ Precondition Testing ============
    // Test Precondition Negative
    TEST(PiercingTakeDamageTest, TestPreconditionNegative) {

    }

    // Test Precondition Positive
    TEST(PiercingTakeDamageTest, TestPreconditionPositive) {
        
    }

    // Test Precondition Bounds
    TEST(PiercingTakeDamageTest, TestPreconditionBounds) {
        
    }

    // ============ Positive Testing ============
    // Test Preconditions Bounds
    TEST(ArmourTakeDamageTest, PositiveTesting) {
        
    }
}