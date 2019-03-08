#ifndef PRINTUTILS_H

#include <vector>

template<typename T>
void printVector(std::vector<T> v) {
	for (int i = 0; i < v.size(); ++i) {
		std::cout << v[i] << " ";
	}
}

#define PRINTUTILS_H
#endif // !PRINTUTILS_H