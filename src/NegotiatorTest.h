#include <stdexcept>
#include "Negotiator.h"
#include "Alliance.h"
#include "gtest/gtest.h"

namespace {

    // Tests Negotiator Functionality

    // Tests AddOn setEntity()
    // ============ Positive Testing ============
    // Test Preconditions Bounds
    TEST(NegotiatorOfferPeace, PositiveTesting) {
        Alliance* a = new Alliance();  
        Alliance* b = new Alliance();
        Negotiator* n = new Negotiator();
        n->addAlliance(a);
        n->addAlliance(b);
        a->setNegotiator(n);
        b->setNegotiator(n);

        if (a->offerPeace()) {
            EXPECT_EQ(3, a->getActive());
        } else { 
            EXPECT_EQ(1, a->getActive());
        }
    }

    TEST(NegotiatorSurrender, PositiveTesting) {
        Alliance* a = new Alliance();  
        Alliance* b = new Alliance();  
        Alliance* c = new Alliance(); 
        Alliance* d = new Alliance();
        Alliance* e = new Alliance();
        Negotiator* n = new Negotiator();
        n->addAlliance(a);
        n->addAlliance(b);
        n->addAlliance(c);
        n->addAlliance(d);
        n->addAlliance(e);
        a->setNegotiator(n);
        b->setNegotiator(n);
        c->setNegotiator(n);
        d->setNegotiator(n);
        e->setNegotiator(n);

        a->surrender();
        EXPECT_EQ(2, a->getActive());

        b->surrender();
        EXPECT_EQ(2, a->getActive());

        c->surrender();
        EXPECT_EQ(2, a->getActive());

        d->surrender();
        EXPECT_EQ(2, a->getActive());
    }

}