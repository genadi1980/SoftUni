#ifndef  DEFINES_H
#define DEFINES_H
#include <sstream>
#include <string>
#include <iostream>

#define DONT_COMPILE_THIS
#define STANDARD_TEMPLATE_LIBRARY namespace std;

std::istream& operator>>(std::istringstream& in, std::string &input) {
	in >> input;

	return in;
}

std::ostream& operator<<(std::ostringstream& out, std::string& input) {

	return out;
}
#endif // ! DEFINES_H