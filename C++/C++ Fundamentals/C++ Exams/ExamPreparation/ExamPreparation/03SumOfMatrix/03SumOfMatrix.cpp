// 03SumOfMatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

const int MAX_NUM = 100;

int main()
{
	int array[MAX_NUM][MAX_NUM];

	int n = 0;
	std::cout << "Enter size : ";
	std::cin >> n;

	for (size_t i = 0; i < n; ++i)
	{
		for (size_t j = 0; j < n; ++j)
		{
			std::cout << "Enter matrix[" << i << "][" << j << "] = ";
			std::cin >> array[i][j];
		}
	}

	int sum = 0;

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			std::cout << array[i][j];
		}

		std::cout << std::endl;
	}

	for (size_t i = 0; i < n; ++i)
	{
		for (size_t j = i + 1; j < n; ++j)
		{
			sum += array[i][j];
		}
	}

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
