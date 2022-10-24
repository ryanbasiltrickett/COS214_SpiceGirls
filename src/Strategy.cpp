#include "Strategy.h"

using namespace std;

Strategy::Strategy() {
}

Strategy::~Strategy(){

}

bool Strategy::setStrategy(string strategy){

	this->strategy = strategy;
}

string getStrategy() const{
	return this->strategy;
}