#ifndef ORDERED_INSERTER_H

#include "Company.h"
#include <vector>
#include <algorithm>

bool isBigger(const Company* left, const Company* right) {
	return left->getId() < right->getId();
}

class OrderedInserter {
public:
	OrderedInserter(std::vector<const Company*> & companies) : _companies(companies) {}

	void insert(const Company* c) {
		_companies.push_back(c);
		std::sort(_companies.begin(), _companies.end(), isBigger);
	}
private:
	std::vector<const Company*> & _companies;
};
#define ORDERED_INSERTER_H
#endif // !ORDERED_INSERTER_H

