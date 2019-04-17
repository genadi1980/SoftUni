// 04Words.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <set>

#include "Word.h"

std::ostream& operator<<(std::ostream& out, const Word& w) {
	return out << w.getWord() << " " << w.getCount();
}

void printWordCounts(const std::string & line) {
	std::istringstream lineIn(line);
	std::set<Word> words;
	std::string wordStr;

	while (lineIn >> wordStr) {
		words.insert(Word(wordStr));
	}

	for (Word w : words) {
		std::cout << w << std::endl;
	}

}
int main()
{
	std::string line;
	std::getline(std::cin, line);
	printWordCounts(line);

	std::cout << "---" << std::endl;

	std::getline(std::cin, line);
	printWordCounts(line);

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
