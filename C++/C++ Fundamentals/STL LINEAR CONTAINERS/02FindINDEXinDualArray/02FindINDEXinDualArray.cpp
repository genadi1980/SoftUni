// 02FindINDEXinDualArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
int main()
{
	std::vector<std::vector<int>> numbers;
	std::vector<int> inputVector;
	int digit = 0;
	int digitRow = 0;
	int digitCol = 0;
	int rows = 0;
	int cols = 0;
	bool isFound = false;
	int counter = 0;
	std::cin >> digit;

	std::cin >> rows >> cols;


	for (unsigned long row = 0; row < rows; row++)
	{
		inputVector.clear();

		for (unsigned long col = 0; col < cols; col++)
		{	
			int num = 0;
			std::cin >> num;
			inputVector.push_back(num);

			if (num == digit)
			{
				digitRow = row;
				digitCol = col;

				std::cout << digitRow << digitCol << std::endl;
				counter++;
			}
			else {
				isFound = true;
			}
		}

		numbers.push_back(inputVector);
	}

	if (isFound && counter == 0)
	{
		std::cout << "Number not found" << std::endl;
	}
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
