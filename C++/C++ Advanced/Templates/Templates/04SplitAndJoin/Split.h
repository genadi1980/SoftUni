#ifndef SPLIT_H

#include <sstream>
#include <vector>
#include <string>

template <typename T>
std::vector<T> split( T line, const char separator) {
	std::stringstream ss(line);
	std::string temp;
	std::vector<T> container;

	while (std::getline(ss, temp, separator)){
		container.push_back(temp);
	}
	return container;
}

#define SPLIT_H
#endif // !SPLIT_H