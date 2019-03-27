// 02Find.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

#include "Company.h"

#include "Find.h"

int main() {
	using namespace std;

	vector<Company*> companies;

	string line;
	while (getline(cin, line) && line != "end") {
		istringstream lineIn(line);

		Company* c = new Company();
		lineIn >> *c;
		companies.push_back(c);
	}

	string searchIdLine;
	getline(cin, searchIdLine);
	int searchId = stoi(searchIdLine);

	Company* companyWithSearchedId = find(companies, searchId);

	if (companyWithSearchedId != nullptr) {
		cout << *companyWithSearchedId << endl;
	}
	else {
		cout << "[not found]" << endl;
	}

	for (auto companyPtr : companies) {
		delete companyPtr;
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
