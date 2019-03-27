// 02SortBy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <sstream>
#include <string>

#include "Company.h"
#include "SortBy.h"

bool lessThanById(const Company& a, const Company& b) {
	return a.getId() < b.getId();
}

bool lessThanByName(const Company& a, const Company& b) {
	return a.getName() < b.getName();
}

int main()
{
	using namespace std;

	vector<string> lines;
	string line;
	while (getline(cin, line) && line != "end") {
		lines.push_back(line);
	}

	int numCompanies = lines.size();
	Company** companyPtrs = new Company*[numCompanies];
	for (int i = 0; i < lines.size(); i++) {
		string line = lines[i];

		istringstream lineIn(line);
		string name;
		int id;
		lineIn >> name >> id;

		companyPtrs[i] = new Company(id, name);
	}

	string sortKey;
	cin >> sortKey;

	if (sortKey == "name") {
		sortBy(companyPtrs, companyPtrs + numCompanies, lessThanByName);
	}
	else if (sortKey == "id") {
		sortBy(companyPtrs, companyPtrs + numCompanies, lessThanById);
	}

	for (int i = 0; i < numCompanies; i++) {
		cout << companyPtrs[i]->toString() << endl;
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
