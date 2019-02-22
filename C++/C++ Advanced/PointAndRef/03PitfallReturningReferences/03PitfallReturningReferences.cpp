// 03PitfallReturningReferences.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> & generateRoots(int toNumber)
{
	std::vector<int> roots;
	for (int i = 0; i < toNumber; i++)
	{
		roots.push_back(sqrt(i));

	}

	return roots;
}

int main()
{
	std::vector<int> & rootsRef = generateRoots(100);

	std::vector<int> otherVector{ 42, 13, 69 };
	std::cout << rootsRef[4] << std::endl;

	std::cout << &rootsRef;

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
