// 01MinBy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <sstream>
#include <vector>

#include "MinBy.h"


std::vector<std::string> readWhitespaceSeparatedValuesLine() {
	std::vector<std::string> values;

	std::string line;
	std::getline(std::cin, line);

	std::istringstream lineIn(line);

	std::string value;

	while (lineIn >> value)
	{
		values.push_back(value);
	}

	return values;
}

bool lessThanBySize(const std::string& a, const std::string& b) {
	return a.size() < b.size();
}

bool lessThanByLex(const std::string& a, const std::string& b) {
	return a < b;
}

bool moreThanBySize(const std::string& a, const std::string& b) {
	return a.size() > b.size();
}


int main()
{
	std::vector<std::string> values = readWhitespaceSeparatedValuesLine();

	int minCharacteristic = readWhitespaceSeparatedValuesLine()[0][0] - '0';

	switch (minCharacteristic)
	{
	case 1:
		std::cout << minBy(values, lessThanByLex) << std::endl;
		break;

	case 2:
		std::cout << minBy(values, lessThanBySize) << std::endl;
		break;

	case 3:
		std::cout << minBy(values, moreThanBySize) << std::endl;
		break;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
