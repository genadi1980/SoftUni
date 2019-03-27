// 01Sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#include "Company.h"
#include "01Sort.h"

bool compareById(const Company & left, const Company & right) {
	return left.getId() < right.getId();
}

bool compareByName(const Company & left, const Company & right) {
	return left.getName() < right.getName();
}

int main()
{
	std::vector<Company> companies;

	int id = 0;
	std::string input;
	std::string companyName;

	std::istringstream sstr;

	while (true)
	{
		std::getline(std::cin, input);
		if ("end" == input) {
			break;
		}

		sstr.clear();
		sstr.str(input);

		sstr >> companyName >> id;

		companies.emplace_back(id, companyName);
	}

	std::getline(std::cin, input);

	if ("id" == input) {
		std::sort(companies.begin(), companies.end(), compareById);
	}
	else {
		std::sort(companies.begin(), companies.end(), compareByName);
	}
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
