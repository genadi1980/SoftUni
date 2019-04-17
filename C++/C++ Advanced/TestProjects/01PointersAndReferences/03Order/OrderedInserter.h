#ifndef ORDERINSERTER_H

#include <algorithm>
#include <vector>

#include "Company.h"

bool isBigger(const Company* a, const Company* b) {
	return (a->getId() < b->getId());
}

class OrderedInserter {
public:
	OrderedInserter(std::vector<const Company*> & companies) : companies(companies) {}

	void insert(const Company* c) {
		companies.push_back(c);		
		std::sort(companies.begin(), companies.end(), isBigger);
	}

private:
	std::vector<const Company*> & companies;
};



#define ORDERINSERTER_H
#endif // !ORDERINSERTER_H
