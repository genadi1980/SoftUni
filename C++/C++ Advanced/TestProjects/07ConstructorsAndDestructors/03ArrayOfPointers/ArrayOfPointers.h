#ifndef ARRAY_OF_POINTERS_H

#include <vector>
#include <memory>

#include "Company.h"

class ArrayOfPointers {
	std::vector<std::shared_ptr<Company> > pointers;

public:
	ArrayOfPointers() {}

	void add(Company* company) {
		this->pointers.push_back(std::shared_ptr<Company>(company));
	}

	int getSize() const {
		return this->pointers.size();
	}

	Company* get(int index) const {
		return this->pointers.at(index).get();
	}
};
#define ARRAY_OF_POINTERS_H
#endif // !ARRAY_OF_POINTERS_H
