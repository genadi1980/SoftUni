// 02RemoveInvalid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>

#include "Company.h"
#include "RemoveInvalid.h"

std::vector<std::string> readStringsLine() {
	std::vector<std::string> values;

	std::string line;
	std::getline(std::cin, line);

	std::istringstream lineIn(line);

	std::string value;
	while (lineIn >> value) {
		values.push_back(value);
	}

	return values;
}

int main()
{
	std::cin.sync_with_stdio(false);
	std::cout.sync_with_stdio(false);

	std::list<Company*> companies;
	std::vector<std::string> properties = readStringsLine();

	int sinceLastRemoval = 0;
	while (properties[0] != "end") {
		companies.push_back(new Company(std::stoi(properties[0]), properties[1]));

		sinceLastRemoval++;
		if (sinceLastRemoval >= 10) {
			removeInvalid(companies);
			sinceLastRemoval = 0;
		}

		properties = readStringsLine();
	}

	removeInvalid(companies);

	for (Company* c : companies) {
		std::cout << c->toString() << std::endl;
		delete c;
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
