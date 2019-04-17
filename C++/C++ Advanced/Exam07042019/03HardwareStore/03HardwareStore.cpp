// 03HardwareStore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include "Store.h"

int main()
{
	Store store;
	std::string input;
	int inputSize = 0;

	std::cin >> inputSize;
	std::cin.ignore();

	for (int i = 0; i < inputSize; ++i)
	{
		getline(std::cin, input);
		std::istringstream sstr(input);
		std::string command;

		sstr >> command;

		if ("buy" == command)
		{
			std::string name;
			double price = 0.0;
			double monitorSize = 0.0;

			sstr >> name >> price >> monitorSize;
			store.buy(name, price, monitorSize);
		}
		else if ("remove" == command)
		{
			int index = 0;

			sstr >> index;
			store.remove(index);
		}
		else //"copy" == command
		{
			int indexFrom = 0;
			int indexTo = 0;

			sstr >> indexFrom >> indexTo;
			store.copy(indexFrom, indexTo);
		}
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
