#include <stdexcept>
#include "AddOn.h"
#include "Piercing.h"
#include "Armour.h"
#include "Personnel.h"
#include "TerrainType.h"
#include "gtest/gtest.h"

namespace {

    // Tests General AddOn Functionality

    // Tests AddOn setValue()
    // ============ Precondition Testing ============
    // Test Precondition Negative
    TEST(AddOnSetValueTest, TestPreconditionNegative) {
        Armour* a = new Armour(10);
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
        Armour* a = new Armour(5);
        a->setValue(5);
        EXPECT_EQ(5, a->getValue());
    }

    // Test Precondition Bounds
    TEST(AddOnSetValueTest, TestPreconditionBounds) {
        Armour* a = new Armour(5);
        try {
            a->setValue(0);
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
        Armour* a = new Armour(5);
        
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
        Armour* a = new Armour(5);
        
        Personnel* p = new Personnel(new TerrainType(), 100, 10);  
        a->setEntity(p);
        EXPECT_EQ(p, a->getEntity());

        Personnel* m = new Personnel(new TerrainType(), 100, 10);  
        a->setEntity(m);
        EXPECT_EQ(m, a->getEntity());

        Personnel* n = new Personnel(new TerrainType(), 100, 10);  
        a->setEntity(n);
        EXPECT_EQ(n, a->getEntity());
    }
    
    // Tests Armour AddOn Functionality

    // Tests Armour takeDamage()
    // ============ Precondition Testing ============
    // Test Precondition Negative
    TEST(ArmourTakeDamageTest, TestPreconditionNegative) {
        Armour* a = new Armour(10);
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
        Armour* a = new Armour(10);
        Personnel* p = new Personnel(new TerrainType(), 100, 10); 
        
        a->setEntity(p);
        a->takeDamage(10);
        EXPECT_EQ(0, a->getValue());
        EXPECT_EQ(100, p->getHealth());
    }

    // Test Precondition Bounds
    TEST(ArmourTakeDamageTest, TestPreconditionBounds) {
        Armour* a = new Armour(10);
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
        Armour* a = new Armour(20);
        Personnel* p = new Personnel(new TerrainType(), 100, 10); 
        a->setEntity(p);
        
        a->takeDamage(10);
        EXPECT_EQ(10, a->getValue());
        EXPECT_EQ(100, p->getHealth());
        
        a->takeDamage(10);
        EXPECT_EQ(0, a->getValue());
        EXPECT_EQ(100, p->getHealth());
        
        a->takeDamage(10);
        EXPECT_EQ(0, a->getValue());
        EXPECT_EQ(90, p->getHealth());
    }
    
    // Tests Armour dealDamage()
    // ============ Positive Testing ============
    // Test Preconditions Bounds
    TEST(ArmourDealDamageTest, PositiveTesting) {
        Armour* a = new Armour(10);
        Personnel* p = new Personnel(new TerrainType(), 100, 10);  
        a->setEntity(p);
        Personnel* x = new Personnel(new TerrainType(), 100, 10);
        
        a->dealDamage(x);
        EXPECT_EQ(10, a->getValue());
        EXPECT_EQ(90, x->getHealth());
        
        a->dealDamage(x);
        EXPECT_EQ(10, a->getValue());
        EXPECT_EQ(80, x->getHealth());
        
        a->dealDamage(x);
        EXPECT_EQ(10, a->getValue());
        EXPECT_EQ(70, x->getHealth());
    }

    // Tests Piercing AddOn Functionality
    
    // Tests Piercing takeDamage()
    // ============ Positive Testing ============
    // Test Preconditions Bounds
    TEST(PiercingTakeDamageTest, PositiveTesting) {
        Piercing* pi = new Piercing(10);
        Personnel* p = new Personnel(new TerrainType(), 100, 10); 
        pi->setEntity(p);

        pi->takeDamage(10);
        EXPECT_EQ(10, pi->getValue());
        EXPECT_EQ(90, p->getHealth());
        
        pi->takeDamage(10);
        EXPECT_EQ(10, pi->getValue());
        EXPECT_EQ(80, p->getHealth());

        pi->takeDamage(10);
        EXPECT_EQ(10, pi->getValue());
        EXPECT_EQ(70, p->getHealth());
    }
    
    // Tests Piercing dealDamage()
    // ============ Positive Testing ============
    // Test Preconditions Bounds
    TEST(PiercingDealDamageTest, PositiveTesting) {
        Piercing* pi = new Piercing(10);
        Personnel* p = new Personnel(new TerrainType(), 100, 10); 
        pi->setEntity(p);
        Personnel* x = new Personnel(new TerrainType(), 100, 10);

        pi->dealDamage(x);
        EXPECT_EQ(10, pi->getValue());
        EXPECT_EQ(80, x->getHealth());
        
        pi->dealDamage(x);
        EXPECT_EQ(10, pi->getValue());
        EXPECT_EQ(60, x->getHealth());
        
        pi->dealDamage(x);
        EXPECT_EQ(10, pi->getValue());
        EXPECT_EQ(40, x->getHealth());
    }
}