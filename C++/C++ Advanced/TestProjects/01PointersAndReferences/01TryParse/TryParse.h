#ifndef TRYPARSE_H

#include <string>
#include <sstream>

bool tryParse( const std::string & aString, int & a) {
	bool isNumber = false;
	std::stringstream ss(aString);
	ss >> a;
	if (ss.fail()) {
		isNumber = false;
	}
	else {
		isNumber = true;
	}

	return isNumber;
}


#define TRYPARSE_H
#endif // !TRYPARSE_H
