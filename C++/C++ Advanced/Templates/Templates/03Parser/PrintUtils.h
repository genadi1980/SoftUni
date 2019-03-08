#ifndef PARSER_UTILS_H
#include <iostream>
#include <vector>
#include <sstream>

template<typename T>
class Parser {
private:
	std::istream & line;
	std::string stopLine;
public:
	Parser(std::istream & LINE, std::string stopLine) : line(LINE) , stopLine(stopLine) {}

	
	bool readNext(T & n) {
		std::string temp;
		std::getline(line, temp);
		std::istringstream ss(temp);
		if ((ss >> n) && (temp != stopLine)) {
			return true;
		}
		else {
			return false;
		}

	}

};

#define PARSER_UTILS_H
#endif // !PARSER_UTILS_H
