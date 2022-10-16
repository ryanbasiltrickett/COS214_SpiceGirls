#ifndef WARENGINEMEMENTO_H
#define WARENGINEMEMENTO_H

class WarEngineMemento {

private:
	WarEngineState state;

public:
	WarEngineMemento(Alliance* playOne, Alliance* playTwo, Area* warTheatre);
};

#endif
