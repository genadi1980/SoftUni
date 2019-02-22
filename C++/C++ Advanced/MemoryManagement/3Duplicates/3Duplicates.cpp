// 3Duplicates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <list>

#include "Company.h"

#include "RemoveDuplicates.h"

int main() {
	using namespace std;

	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);

	list<Company*> companies;
	string line;
	Company* lastCompany = nullptr;
	while (getline(cin, line) && line != "end") {
		if (line[0] != '*') {
			lastCompany = new Company();
			istringstream(line) >> *lastCompany;
			companies.push_back(lastCompany);
		}
		else {
			if (lastCompany == nullptr) {
				throw exception(); // error in parsing - tests or skeleton is wrong
			}

			if (line == "*begin") {
				companies.insert(companies.begin(), lastCompany);
			}
			else if (line == "*end") {
				companies.insert(companies.end(), lastCompany);
			}
			else {
				throw exception(); // error in parsing - tests or skeleton is wrong
			}
		}
	}

	removeDuplicates(companies);

	for (Company* companyPtr : companies) {
		cout << *companyPtr << endl;
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
