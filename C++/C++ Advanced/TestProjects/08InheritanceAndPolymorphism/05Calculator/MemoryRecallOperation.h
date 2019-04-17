#ifndef Memory_Recall_Operation_h

#include <memory>

#include "Operation.h"
#include "MemoryStorage.h"

class MemoryRecallOperation : public Operation {
	std::shared_ptr<MemoryStorage> memory;
public:
	MemoryRecallOperation(std::shared_ptr<MemoryStorage> memory) : memory(memory) {}

	void addOperation(int operand) {
	}

	bool isCompleted() override {
		return true;
	}

	int getResult() override {
		return this->memory->getResult();
	}
};
#define Memory_Recall_Operation_h
#endif //!Memory_Recall_Operation_h