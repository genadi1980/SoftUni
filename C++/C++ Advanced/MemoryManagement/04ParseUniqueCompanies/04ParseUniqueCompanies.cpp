// 04ParseUniqueCompanies.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>

#include "Company.h"
#include "ParseCompanies.h"

std::string byName(const Company& c) {
	return c.getName();
}

std::string byId(const Company& c) {
	std::ostringstream asStringOut;
	asStringOut << c.getId();
	return asStringOut.str();
}

std::string byNameAndId(const Company& c) {
	return byName(c) + byId(c);
}

int main() {
	std::cin.sync_with_stdio(false);
	std::cout.sync_with_stdio(false);

	std::ostringstream input;

	std::string line;
	std::getline(std::cin, line);
	while (line != "end") {
		input << line << std::endl;
		std::getline(std::cin, line);
	}

	int uniquenessCriteria;
	std::cin >> uniquenessCriteria;

	int numCompanies;
	Company* companies;

	if (uniquenessCriteria == 1) {
		companies = parseUniqueCompanies(input.str(), numCompanies, byId);
	}
	else if (uniquenessCriteria == 2) {
		companies = parseUniqueCompanies(input.str(), numCompanies, byName);
	}
	else if (uniquenessCriteria == 3) {
		companies = parseUniqueCompanies(input.str(), numCompanies, byNameAndId);
	}
	else {
		companies = nullptr;
	}

	Company* companiesEnd = companies + numCompanies;
	for (Company* c = companies; c < companiesEnd; c++) {
		std::cout << c->toString() << std::endl;
	}
	delete[] companies;

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
