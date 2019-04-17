// 05Memory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include "Company.h"
#include "CompanyMemoryUtils.h"

int main() {
	typedef unsigned char byte;

	using namespace std;

	ostringstream input;
	string line;
	int numCompanies = 0;
	while (getline(cin, line) && line != "end")  {
		input << line << " ";
		numCompanies++;
	}

	vector<byte> inputBytes;
	istringstream inputIn(input.str());
	int byteValue;
	while (inputIn >> byteValue) {
		inputBytes.push_back(byteValue);
	}

	byte* memory = new byte[inputBytes.size()];

	for (int i = 0; i < inputBytes.size(); i++) {
		memory[i] = inputBytes[i];
	}

	vector<Company> companies = readCompaniesFromMemory(memory, numCompanies);

	for (Company c : companies) {
		cout << c << endl;
	}

	delete[] memory;

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
