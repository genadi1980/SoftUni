// 02Aggregators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <memory>
#include <sstream>

#include "Aggregator.h"
#include "SumAggregator.h"
#include "AverageAggregator.h"
#include "MinAggregator.h"

int main()
{
	std::string aggregationType;
	std::cin >> aggregationType;
	std::cin.ignore();

	std::string valuesLine;
	std::getline(std::cin, valuesLine);
	std::istringstream valuesIn(valuesLine);

	StreamAggregator* aggregator;

	if (aggregationType == "sum") {
		aggregator = new SumAggregator(valuesIn);
	}
	else if (aggregationType == "average") {
		aggregator = new AverageAggregator(valuesIn);
	}
	else if (aggregationType == "min") {
		aggregator = new MinAggregator(valuesIn);
	}
	else {
		throw std::exception();
	}

	std::cout << aggregator->aggregate() << std::endl;

	delete aggregator;

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
