// 01DifferentStrings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	int numberOfSymbols = 0;
	int counterDiff = 0;
	int counterSim = 0;
	int sum = 0;
	std::string lineOne = "";
	std::string lineTwo = "";

	std::cin >> numberOfSymbols;
	std::cin.ignore();
	std::getline(std::cin, lineOne);
	std::getline(std::cin, lineTwo);

	for (unsigned long i = 0; i < numberOfSymbols; i++)
	{
		char lineOneSymbol = lineOne[i];
		char lineTwoSymbol = lineTwo[i];
		if (lineOneSymbol == lineTwoSymbol) {
			std::cout << lineOneSymbol;
			counterSim++;
		}
		else if ((lineOneSymbol >= 'a' && lineOneSymbol <= 'z'
			|| lineOneSymbol >= 'A' && lineOneSymbol <= 'Z'
			|| lineTwoSymbol >= 'a' && lineTwoSymbol <= 'z'
			|| lineTwoSymbol >= 'a' && lineTwoSymbol <= 'Z')
			&& tolower(lineOneSymbol) == tolower(lineTwoSymbol))
		{
			char upperLetter = toupper(lineOneSymbol);
			std::cout << upperLetter;
			counterSim++;
		}

		
		else if (lineOne[i] != lineTwo[i])
		{
			std::cout << "#";
			counterDiff++;
		}

	}

	for (int i = 0; i < numberOfSymbols; ++i) 
	{
		if (lineOne[i] >= '1' && lineOne[i] <= '9')
		{
			sum += lineOne[i] - '0';
		}

		if (lineTwo[i] >= '1' && lineTwo[i] <= '9')
		{
			sum += lineTwo[i] - '0';
		}
	}
	std::cout << std::endl;
	std::cout << counterDiff << std::endl;
	std::cout << counterSim << std::endl;
	std::cout << sum << std::endl;

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
