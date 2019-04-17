#ifndef REMOVE_DUPLICATES_H

#include "Company.h"
#include <set>
#include <list>

void removeDuplicates(std::list<Company*> & companies) {
	std::set<std::string> uniqueCompanies;

	std::list<Company *>::iterator it;
	std::string currName;

	for (it = companies.begin(); it != companies.end();) {
		currName = (*it)->getName();
		if (uniqueCompanies.find(currName) == uniqueCompanies.end()) {
			uniqueCompanies.insert(currName);
			++it;
		}
		else {
			it = companies.erase(it);
		}
	}
}


#define REMOVE_DUPLICATES_H
#endif // !REMOVE_DUPLICATES_H
