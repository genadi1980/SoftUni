#ifndef FIND_H

#include "Company.h"

#include <vector>

Company* find(const std::vector<Company*> & companies, const int & searchId) {
	for (size_t i = 0; i < companies.size(); ++i) {
		if (searchId == companies[i]->getId()) {
			return companies[i];
			break;
		}

	}

	return nullptr;
}
#define FIND_H
#endif // !FIND_H
