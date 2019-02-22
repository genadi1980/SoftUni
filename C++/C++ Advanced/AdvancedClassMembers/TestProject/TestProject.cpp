// 03 Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

//#include "Operators.h"

int main() {
	std::vector<std::string> formattedLines;

	int numLines;
	std::cin >> numLines;
	std::cin.ignore();

	std::string heading = "Formatted Lines";
	std::string separator = "----------------";

	std::stringstream ss;
	 ss << heading << "\n" << separator;
	 std::string line;
	 while (ss >> line )
	 {
		 formattedLines.push_back(line);
	 }
	
	

	for (int i = 1; i <= numLines; i++) {
		std::string line;
		std::getline(std::cin, line);

		std::string numberedLine;
		numberedLine = numberedLine + std::to_string(i);
		numberedLine = numberedLine + ". ";
		numberedLine = numberedLine + line;
		numberedLine = numberedLine + " (";
		numberedLine = numberedLine + std::to_string(line.size());
		numberedLine = numberedLine + ")";

		formattedLines.push_back(numberedLine);
	}

	formattedLines.push_back(separator);

	for (std::string s : formattedLines) {
		std::cout << s << std::endl;
	 }
	std::cout << std::endl;

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
