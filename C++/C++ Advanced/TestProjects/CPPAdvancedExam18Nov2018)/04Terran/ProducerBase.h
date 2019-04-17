#ifndef PRODUCER_BASE_H

#include <list>

#include "Producer.h"

class ProducerBase : public Producer {
protected:
	std::list<UnitPtr> produced;
public:
	std::list<UnitPtr> extractProduced() override {
		std::list<UnitPtr> result = this->produced;
		this->produced.clear();
		return result;
	}
};
#define PRODUCER_BASE_H
#endif // !PRODUCER_BASE_H
