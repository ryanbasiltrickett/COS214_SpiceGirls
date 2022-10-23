#include "CommandCenter.h"

CommandCenter::CommandCenter() {
	
}

void CommandCenter::update(KeyPoint* keyPoint) {

	this->keyPoint = keyPoint;
}

CommandCenter* CommandCenter::clone() {
	
	CommandCenter* commandCenterClone = new CommandCenter(); 

	commandCenterClone->setGeneral(this->general);
	commandCenterClone->setKeyPoint(this->keyPoint);

	return commandCenterClone;
}
