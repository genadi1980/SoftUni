// 03ArrayOfPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>

#include "Company.h"
#include "ArrayOfPointers.h"

std::istream& operator>>(std::istream& in, Company& company) {
	return in >> company.id >> company.name;
}

std::ostream& operator<<(std::ostream& out, const Company& company) {
	return out << company.id << " " << company.name;
}

Company doRun(std::string inputStr) {
	std::istringstream in(inputStr);

	size_t numCompanies;
	in >> numCompanies;

	ArrayOfPointers companies;

	for (size_t i = 0; i < numCompanies; i++) {
		Company* c = new Company();
		in >> *c;

		companies.add(c);
	}

	int id;
	in >> id;

	Company result;
	for (size_t i = 0; i < companies.getSize(); i++) {
		if (companies.get(i)->getId() == id) {
			result = *companies.get(i);
		}
	}

	return result;
}

int main()
{
	size_t numRuns;
	std::cin >> numRuns;

	std::string line;
	std::ostringstream inputBuffer;

	Company result;

	while (std::getline(std::cin, line) && line != "end") {
		inputBuffer << line << std::endl;
	}
	std::string inputStr = inputBuffer.str();

	for (size_t run = 0; run < numRuns; run++) {
		Company newResult = doRun(inputStr);
		if (run > 0) {
			if (result.getId() != newResult.getId() || result.getName() != newResult.getName()) {
				std::cout << "wrong result on run " + run << std::endl;
			}
		}

		result = newResult;
	}

	std::cout << result << std::endl;

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
