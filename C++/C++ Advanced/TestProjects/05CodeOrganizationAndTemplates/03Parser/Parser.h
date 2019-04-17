#ifndef PARSER_H

#include <sstream>
#include <string>
#include <iostream>

template<typename T>
class Parser {
private:
	std::istream & input;
	std::string stopLine;

public:
	Parser() {}
	Parser(std::istream & input, std::string stopLine)
		: input(input)
		, stopLine(stopLine) {}

	bool readNext(T & v) {
		std::string s;
		std::getline(input, s);
		if (s == stopLine) {
			return false;
		}
		else {
			std::istringstream ss(s);
			T t;
			ss >> t;
			v = t;
			return true;
		}
	}
};
#define PARSER_H
#endif // !PARSER_H
