#ifndef FIND_H

#include <vector>

#include "Company.h"

Company* find(const std::vector<Company*> & compaies, const int searchId) {
	for (int i = 0; i < compaies.size(); ++i) {
		if (compaies.at(i)->getId() == searchId) {
			return compaies.at(i);
			break;
		}
		
	}
}
#define FIND_H
#endif // !FIND_H
