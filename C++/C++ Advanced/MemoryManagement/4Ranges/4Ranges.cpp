// 4Ranges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <sstream>

struct Range
{
	Range(const int inputFrom, const int inputTo)
	{
		from = inputFrom;
		to = inputTo;
	}

	int from;
	int to;
};


bool isInRange(const std::vector<Range> & ranges, const int value)
{
	for (const Range & r : ranges)
	{
		if ((value >= r.from) && (value <= r.to))
		{
			return true;
		}
	}

	return false;
}

int main()
{
	std::vector<Range> ranges;
	std::string input;
	std::istringstream sstr;
	std::ostringstream ostr;
	int value = 0;
	int from = 0;
	int to = 0;

	while (true)
	{
		getline(std::cin, input);

		if ("." == input)
		{
			break;
		}

		sstr.clear();
		sstr.str(input);

		sstr >> from >> to;

		ranges.emplace_back(from, to);
	}

	while (true)
	{
		getline(std::cin, input);

		if ("." == input)
		{
			break;
		}

		sstr.clear();
		sstr.str(input);

		sstr >> value;

		if (isInRange(ranges, value))
		{
			ostr << "in" << '\n';
		}
		else
		{
			ostr << "out" << '\n';
		}
	}

	std::cout << ostr.str();
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
