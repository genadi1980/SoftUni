#ifndef REMOVE_INVALID_H

#include "Company.h"

#include <list>

void removeInvalid(std::list<Company*> & companies) {
	std::list<Company*>::iterator it = companies.begin();

	while (it!=companies.end())
	{
		if ((*it)->getId() < 0) {
			delete *it;
			it = companies.erase(it);
			continue;
		}

		it++;
	}
}

#define REMOVE_INVALID_H
#endif // !REMOVE_INVALID_H

