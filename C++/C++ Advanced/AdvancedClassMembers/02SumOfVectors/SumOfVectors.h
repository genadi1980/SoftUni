#ifndef SUM_OF_VECTORS_H
#define SUM_OF_VECTORS_H

#include <vector>
#include <string>

std::vector<std::string> operator+(std::vector<std::string> vec1, std::vector<std::string> vec2) {
	
	std::vector<std::string> vecResult;

	for (int i = 0; i < vec1.size(); i++)
	{
		std::string temp = vec1[i] + " " + vec2[i];
		vecResult.push_back(temp);
	}

	return vecResult;
}
#endif // !SUM_OF_VECTORS_H
