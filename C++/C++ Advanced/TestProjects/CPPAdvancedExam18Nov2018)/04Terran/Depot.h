#ifndef DEPOT_H


#include "Unit.h"

class Depot : public Unit {
public:
	static const int BUILD_TIME = 25;

	Depot() : Unit("depot") {}

	void update() override {
	}
};
#define DEPOT_H
#endif // !DEPOT_H