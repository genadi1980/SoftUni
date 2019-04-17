// 01MaxSumArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>

#include "Array.h"

int main()
{
	std::cin.sync_with_stdio(false);
	std::cout.sync_with_stdio(false);

	int maxSum;
	Array<int> maxArray(0);

	size_t numArrays;
	std::cin >> numArrays;

	for (size_t i = 0; i < numArrays; i++) {
		size_t arrSize;
		std::cin >> arrSize;
		Array<int> a(arrSize);
		int sum = 0;
		for (size_t elementInd = 0; elementInd < arrSize; elementInd++) {
			int value;
			std::cin >> value;
			a[elementInd] = value;
			sum += value;
		}

		if (maxArray.getSize() == 0 || maxSum < sum) {
			maxArray = a;
			maxSum = sum;
		}
	}

	for (auto element : maxArray) {
		std::cout << element << " ";
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
