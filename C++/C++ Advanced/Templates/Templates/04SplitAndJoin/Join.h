#ifndef JOIN_H

#include <vector>
#include <string>
#include <sstream>

template<typename T>
std::ostream & joined(const std::vector<T> & container, const char & joinStr) {
	std::ostringstream ss;
	std::vector<T>::iterator it;
	for (it = container.begin(); it !- container.end(); ++it) {
		ss << *it << joinStr;
	}

	return ss;
}


#define JOIN_H
#endif // !JOIN_H

