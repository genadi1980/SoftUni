// 03Ranges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <map>
#include <sstream>
#include <string>

std::map<int, int> ReadRanges();

void CompareNumbers(std::map<int, int> &ranges, int digit);

void PrintStatus(bool result);

int main()
{
	std::map<int, int> ranges;
	

	ranges = ReadRanges();
		
	std::string input = "";
	
	getline(std::cin, input);
	
	while ("." != input)
	{
		int number = 0;
		std::istringstream line(input);
		line >> number;
		CompareNumbers(ranges, number);

		getline(std::cin, input);

	}
	
	return 0;
}

void PrintStatus(bool result)
{
	if (result) 
	{
		std::cout << "in" << std::endl;
	}
	else
	{
		std::cout << "out" << std::endl;
	}
}


void CompareNumbers(std::map<int, int> &ranges, int digit)
{
	bool isInsite = false;
	std::map<int, int>::iterator it;

	for (it = ranges.begin(); it != ranges.end(); it++)
	{
		if (digit >= it->first && digit <= it->second)
		{
			isInsite = true;
		}

		
	}
	
	PrintStatus(isInsite);
}

std::map<int, int> ReadRanges() 
{
	std::map<int, int> ranges;
	std::string input;
	getline(std::cin, input);

	int from = 0;
	int to = 0;
	
	while ("." != input) {
		
		std::istringstream line(input);

		line >> from >> to;
		
		ranges.insert(std::pair<int, int>(from, to));

		getline(std::cin, input);
		
	}

	return ranges;
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
