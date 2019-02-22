#pragma once
#ifndef TRYPARSE_H

#include <string>
#include <cctype>
#include <sstream>
	
bool tryParse(std::string & aString, int & a)
{
	bool isParsed = false;
	
	for (int i = 0; i < aString.size(); ++i)
	{
		if (aString[0] == '-')
		{
			isParsed = true;
		}
		else if (isdigit(aString[i]))
		{
			isParsed = true;
		}
		else
		{
			isParsed = false;
			break;
		}
	}

	if (isParsed)
	{
		std::istringstream s(aString);

		s >> a;

		return true;
	}
	else
		return false;
	
	
}
#define TRYPARSE_H
#endif // !TRYPARSE_H

