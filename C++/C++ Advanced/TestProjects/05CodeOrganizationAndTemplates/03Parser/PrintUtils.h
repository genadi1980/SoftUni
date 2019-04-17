#ifndef PRINT_UTILS_H

#include <vector>

template<typename T>
void printVector(std::vector<T> v) {
	for (int i = 0; i < v.size(); ++i) {
		std::_Count_pr << v[i] << " ";
	}
}
#define PRINT_UTILS_H
#endif // !PRINT_UTILS_H