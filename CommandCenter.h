#ifndef COMMANDCENTER_H
#define COMMANDCENTER_H

class CommandCenter {

private:
	General* general;
	KeyPoint* keyPoint;

public:
	CommandCenter();

	void update(KeyPoint* keyPoint);

	CommandCenter* clone();
};

#endif
