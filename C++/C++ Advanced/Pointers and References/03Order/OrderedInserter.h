#pragma once
#ifndef ORDERINSERVER_H

#include "Company.h"
#include <vector>
#include <algorithm>

bool Compare(const Company* c1, const Company* c2)
{
	if (c1->getId() < c2->getId())
		return true;
	return false;
}
class OrderedInserter
{
	
	std::vector< const Company *, std::allocator <const Company * >> & m_companies;

public:
	OrderedInserter(std::vector< const Company *, 
		std::allocator <const Company * >> & companies) 
		: m_companies(companies) {}

	void insert ( const Company* c)
	{
		m_companies.push_back(c);
		std::sort(m_companies.begin(), m_companies.end(), Compare);
	}

};

#define ORDERINSERVER_H
#endif // !ORDERINSERVER_H

