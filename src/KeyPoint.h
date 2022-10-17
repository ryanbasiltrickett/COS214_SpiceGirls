#ifndef KEYPOINT_H
#define KEYPOINT_H
#include <vector>
#include "Alliance.h"
#include "Area.h"
#include "Entity.h"
#include "CommandCenter.h"
#include "Weather.h"


class KeyPoint : Area {

private:
	vector<Entity*> entities;
	vector<CommandCenter*> comCenters;
	Weather* weather;

public:
	KeyPoint();

	bool isKeyPoint();

	void attack(Alliance* alliance);

	void moveEntities(Area* area, Alliance* alliance);

	void addEntity(Entity* entity);

	void assignComCenter(CommandCenter* comCenter);

	void attach(CommandCenter* comCenter);

	void detach(CommandCenter* comCenter);

	void notify();

	Area* clone()
};

#endif
