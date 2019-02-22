// 08UsingNullptr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int* findFirstNegativePtr(int numbers[], int length)
{
	for (int i = 0;i < length; i++)
	{
		if (numbers[i] < 0)
		{
			return &numbers[i];
		}
	}

	return nullptr;
}

int main()
{
	using namespace std;

	int numbers[] = { 1, 5, -1, 12 };

	int* negativePtr = findFirstNegativePtr(numbers, 4);
	if (negativePtr != nullptr) {
		cout << *negativePtr << endl;
	}
	else
	{
		cout << "no negative numbers" << endl;
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
