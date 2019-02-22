#pragma once
#ifndef FIND_H

#include "Company.h"

Company * find(std::vector<Company *> & companies, int searchId)
	{
	  
		for (int i=0; i<companies.size(); ++i)
		{
			if (searchId == companies.at(i)->getId()) 
			{
				return companies.at(i);
			}
		}		
			
	}


#define FIND_H
#endif // !FIND_H

