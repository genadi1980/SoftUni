// 03Groups.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <istream>
#include <map>

#include "Unit.h"
#include "Group.h"

std::string readInput() {
	std::ostringstream input;

	std::string line;
	while (std::getline(std::cin, line) && line != "end") {
		input << line << std::endl;
	}

	return input.str();
}

void runTest(std::istream& in, std::ostream& out) {
	const int numGroups = ('9' - '0') + 1;
	Group groups[numGroups]{};
	std::map<Id, UnitPtr> units;

	std::string command;
	Group selection;
	while (in >> command) {
		if (command == "unit") {
			UnitPtr unit = new Unit();
			in >> *unit;
			units[unit->getId()] = unit;
		}
		else if (command == "select") {
			Id unitId;
			in >> unitId;
			selection.clear();
			selection.add(units[unitId]);
		}
		else if (command == "shift-select") {
			Id unitId;
			while (in >> unitId && unitId != '.') {
				selection.add(units[unitId]);
			}
		}
		else if (command == "ctrl") {
			int groupId;
			in >> groupId;
			groups[groupId] = selection;
		}
		else if (command == "shift") {
			int groupId;
			in >> groupId;
			groups[groupId] << selection;
		}
	}

	for (int i = 0; i < numGroups; i++) {
		out << i << ": " << groups[i] << std::endl;
	}

	for (auto pair : units) {
		delete pair.second;
	}
}

int main() {
	std::cin.sync_with_stdio(false);
	std::cout.sync_with_stdio(false);

	std::vector<Unit*> units;

	int numTests;
	std::cin >> numTests;
	std::cin.ignore();

	std::string input = readInput();

	std::string firstRunResult;
	std::string lastRunResult;
	for (int i = 0; i < numTests; i++) {
		std::istringstream in(input);

		std::ostringstream out;
		runTest(in, out);

		if (i == 0) {
			firstRunResult = out.str();
		}
		if (i == numTests - 1) {
			lastRunResult = out.str();
		}
	}

	if (firstRunResult != lastRunResult) {
		std::cout << "first and last run different: " << std::endl;
		std::cout << firstRunResult;
		std::cout << std::endl << "---" << std::endl;
		std::cout << lastRunResult;
	}
	else {
		std::cout << firstRunResult;
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
