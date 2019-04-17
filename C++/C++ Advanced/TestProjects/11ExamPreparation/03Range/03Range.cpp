// 03Range.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

#include "Range.h"

Range readRange(std::string line) {
	Range r;
	std::istringstream in(line);

	int number;
	while (in >> number) {
		r.add(number);
	}

	return r;
}

int main() {
	std::ios::sync_with_stdio(false);

	std::string line;
	std::getline(std::cin, line);

	std::vector<Range> allRanges;

	while (line != "end") {
		Range r = readRange(line);
		allRanges.push_back(r);
		std::getline(std::cin, line);
	}

	int query;
	std::cin >> query;

	Range maxOccurrencesRange(allRanges[0]);
	for (size_t i = 1; i < allRanges.size(); i++) {
		if (allRanges[i].getCount(query) > maxOccurrencesRange.getCount(query)) {
			maxOccurrencesRange = allRanges[i];
		}
	}

	for (T value : maxOccurrencesRange) {
		std::cout << value << " ";
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
