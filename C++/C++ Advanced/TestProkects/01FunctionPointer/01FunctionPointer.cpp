// 01FunctionPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <sstream>

std::vector<std::string> split(std::string s, char separator) {
	std::vector<std::string> strings;

	std::ostringstream current;

	for (char c : s) {
		if (c == separator) {
			strings.push_back(current.str());

			current.str("");
			current.clear();
		}
		else {
			current << c;
		}
	}

	return strings;
}
int main()
{
	std::vector<std::string>(*p)(std::string, char) = split;

	std::vector<std::string> words = p("the quick brown fox jumps over the lazy dog", ' ');

	for (std::string w : words) {
		std::cout << w << std::endl;
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
