// 02Glitches.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
int main()
{
	std::vector<std::vector<int>> matrix;
	std::vector<int> inputVector;
	int sizeMatrix = 0;
	std::cin >> sizeMatrix;
	
	for (unsigned long row = 0;  row < sizeMatrix; row++)
	{
		inputVector.clear();

		for (unsigned long col = 0; col < sizeMatrix; col++)
		{
			int num = 0;
			std::cin >> num;
			inputVector.push_back(num);

			
		}

		matrix.push_back(inputVector);
	}


	for (unsigned long row = 0; row < sizeMatrix; row++)
	{
		
		for (unsigned long col = 0; col < sizeMatrix; col++)
		{
			std::cout << matrix[row][col];

		}

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
