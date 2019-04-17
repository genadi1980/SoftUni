#ifndef MINBY_H

#include <vector>
#include <string>


std::string minBy(std::vector<std::string> values, bool(*func)(const std::string & a, const std::string & b)) {

	std::string max = values[0];

	std::vector<std::string>::iterator it;

	for ( it = values.begin(); it != values.end(); ++it) {

		if (func(*it, max)) {
			if (max == *it) {
				max;
				break;
			}

			max = *it;
		}
	}

	return max;
}
#define MINBY_H
#endif // !MINBY_H
