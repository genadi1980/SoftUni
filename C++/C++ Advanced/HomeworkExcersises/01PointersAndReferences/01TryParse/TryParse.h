#ifndef TRY_PARSE_H

#include <string>
#include <sstream>


bool tryParse(const std::string & input, int & number) {
	std::istringstream ss(input);
	ss >> number;

	if (ss.fail()) {
		return false;
	}
	else {
		return true;
	}
}
#define TRY_PARSE_H
#endif // !TRY_PARSE_H
