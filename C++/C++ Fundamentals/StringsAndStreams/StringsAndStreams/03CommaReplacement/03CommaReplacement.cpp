// 03CommaReplacement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

int main() {
	
	std::string input;
	getline(std::cin, input);

	char comma = ',';
	char space =  ' ';
	
	replace(input.begin(), input.end(), comma, space);

	std::cout << input << std::endl;
	return 0;
}
