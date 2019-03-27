#ifndef REMOVEINVALID_H


#include <list>

#include "Company.h"

void removeInvalid(std::list<Company*> & companies) {
	std::list<Company*>::iterator it = companies.begin();
	while (it != companies.end()) {
		if ((*it)->getId() < 0) {
			delete *it;
			it = companies.erase(it);
			continue;
		}

		it++;
	}
}
#define REMOVEINVALID_H
#endif // !REMOVEINVALID_H

