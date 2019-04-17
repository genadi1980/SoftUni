#ifndef FIND_H

#include <vector>

#include "Company.h"

Company* find(const std::vector<Company*> & companies, const int searchId) {
	for (int i = 0; i < companies.size(); ++i) {
		if (companies.at(i)->getId() == searchId) {
			return companies.at(i);
			break;
		}
		
	}
}
#define FIND_H
#endif // !FIND_H
