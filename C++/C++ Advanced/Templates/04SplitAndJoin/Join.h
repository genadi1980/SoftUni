#ifndef JOIN_H

#include "Split.h"
#include "string"

template < typename T>
std::string join(std::vector<T> & v, std::string joinStr) {
	for (int i = 0; i < v.size(); i++)
	{
		return std::cout << v[i] << joinStr;
			 
	}
	
}
#define JOIN_H
#endif // !JOIN_H
