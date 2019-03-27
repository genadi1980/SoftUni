#ifndef SORT_BY_H

#include "Company.h"

#include <vector>
#include <string>
#include <algorithm>

bool(*myComparator) (const Company& a, const Company& b);

bool comparator(Company * left, Company * right) {
	return myComparator(*left, *right);
}

void sortBy(Company** begin, Company** end, bool(*lessThan)(const Company& a, const Company& b)) {
	myComparator = lessThan;
	std::sort(begin, end, comparator);
}

#define SORT_BY_H
#endif // SORT_BY_H
