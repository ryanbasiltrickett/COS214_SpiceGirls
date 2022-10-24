#include "CommandCenter.h"

CommandCenter::CommandCenter(General* general, KeyPoint* keypoint): general(general), keyPoint(keyPoint) {
	
}

void CommandCenter::update(KeyPoint* keyPoint) {

	this->keyPoint = keyPoint;
}

CommandCenter* CommandCenter::clone() {
	
	return new CommandCenter(this->general, this->keyPoint);
}
