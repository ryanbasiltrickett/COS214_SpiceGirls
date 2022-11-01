#include "CommandCenter.h"

CommandCenter::CommandCenter() {}

void CommandCenter::update(KeyPoint* keyPoint, Alliance* alliance) {
	for (int i = 0; i < generals.size(); i++) {
		if (generals[i]->getAlliance() == alliance) {
			generals[i]->initiateStrategy(keyPoint);
			return;
		}
	}
}

void CommandCenter::addGeneral(General* general) {
	generals.push_back(general);
}

CommandCenter* CommandCenter::clone() {
	return new CommandCenter();
}
