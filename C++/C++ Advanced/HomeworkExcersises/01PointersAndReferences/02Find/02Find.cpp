// 02Find.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Company.h"
#include "Find.h"

#include <iostream>
#include <vector>
#include <sstream>

int main()
{
	std::vector<Company*> companies;

	std::string line;
	while (std::getline(std::cin, line) && line != "end") {
		std::istringstream lineIn(line);

		Company* c = new Company();
		lineIn >> *c;
		companies.push_back(c);
	}

	std::string searchIdbyInput;
	std::getline(std::cin, searchIdbyInput);
	int searchId = stoi(searchIdbyInput);

	Company* companyFindBySearchedId = find(companies, searchId);

	if (companyFindBySearchedId != nullptr) {
		std::cout << *companyFindBySearchedId << std::endl;
	}
	else {
		std::cout << "[not found]" << std::endl;
	}

	for ( Company* companiesPtr : companies) {
		delete companiesPtr;
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
