// 01FindEVENSinDualArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

void PrintMatrix(std::vector<std::vector<int>> matrix) {

	for (unsigned long row = 0; row < matrix.size(); ++row) {

		for (unsigned long col = 0; col < matrix[row].size(); ++col)
		{
				std::cout << matrix[row][col] << " ";
		}

		std::cout << "\n";
	}
}

int main()
{
	std::vector<std::vector<int>> numbers;

	int rows = 0;
	int cols = 0;
	int counter = 0;

	std::cim >> digit;
	std::cin >> rows >> cols;

	std::vector<int> inputRow;

	for (unsigned long row = 0; row < rows; ++row)
	{
		inputRow.clear();
		for (unsigned long col = 0; col < cols; ++col)
		{
			int num = 0;
			std::cin >> num;
			inputRow.push_back(num);
			if (num % 2 == 0)
			{
				++counter;
			}

		}

		numbers.push_back(inputRow);
	}

	std::cout << counter << std::endl;
}


