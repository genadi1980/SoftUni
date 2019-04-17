// 03MakeCompany.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

#include "Company.h"
#include "MakeCompany.h"


std::vector<std::string> readStringLine() {
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


int main()
{
	std::cin.sync_with_stdio(false);
	std::cout.sync_with_stdio(false);

	std::vector<std::string> properties = readStringLine();
	while (properties[0] != "end") {
		auto company = makeCompany(properties); 
		auto copy = company;
		std::cout << copy -> toString() << std::endl;
		properties = readStringLine();
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
