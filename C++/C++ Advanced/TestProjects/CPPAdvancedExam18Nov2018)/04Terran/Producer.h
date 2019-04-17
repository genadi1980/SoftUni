#ifndef PRODUCER_H


#include <list>

#include "Unit.h"

class Producer {
public:
	virtual std::list<UnitPtr> extractProduced() = 0;

	virtual ~Producer() {}
};

typedef Producer* ProducerPtr;

#define PRODUCER_H
#endif // !PRODUCER_H