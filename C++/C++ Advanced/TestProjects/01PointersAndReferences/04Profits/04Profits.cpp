// 04Profits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

#include "Company.h"
#include "ProfitCalculator.h"

#include "ProfitReport.h"

int main() {

	using namespace std;
	vector<Company> companies;
	string line;

	while (getline(cin, line) && line != "end") {
		istringstream lineIn(line);

		Company c;
		lineIn >> c;
		companies.push_back(c);
	}

	map<int, ProfitCalculator> profitCalculatorsByCompany;
	line = "";
	while (getline(cin, line) && line != "end") {
		int companyId;		
		istringstream lineIn(line);		
		lineIn >> companyId;
		ProfitCalculator calculator;
		lineIn >> calculator;

		profitCalculatorsByCompany[companyId] = calculator;
	}

	Company* fromInclusive = &companies[0];
	Company* toInclusive = &companies[companies.size() - 1];

	cout << getProfitReport(fromInclusive, toInclusive, profitCalculatorsByCompany) << endl;

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
