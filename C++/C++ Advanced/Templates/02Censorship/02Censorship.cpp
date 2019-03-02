// 02Censorship.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <set>

#include "Article13Filter.h"

int main() {
	std::string copyrightedLine;
	std::getline(std::cin, copyrightedLine);

	std::set<std::string> copyrighted;
	std::istringstream lineIn(copyrightedLine);
	std::string copyrightedItem;
	while (lineIn >> copyrightedItem) {
		copyrighted.insert(copyrightedItem);
	}

	Article13Filter filter(copyrighted);

	std::string inputLine;
	while (std::getline(std::cin, inputLine) && inputLine != "end") {
		if (!filter.blockIfCopyrighted(inputLine)) {
			std::cout << inputLine;
		}
	}

	std::cout << "Blocked: ";
	for (std::string blockedItem : filter.getBlocked()) {
		std::cout << blockedItem << " ";
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
