// Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <list>

void swap(int& a, int& b)
{
	int oldA = a;
	a = b;
	b = oldA;
}

void removeNegative(std::list<int>& numbers)
{
	auto i = numbers.begin();
	while (i != numbers.end()) 
	{
		if (*i < 0)
		{
			i = numbers.erase(i);
		}
		else
		{
			i++;
		}
		
	}
}
int main()
{
	int x = 13, y = 42;
	swap(x, y);
	std::cout << x << " " << y << std::endl;

	std::list<int> values{ 1, -69, -4, 42, -2, 13, -9 };
	removeNegative(values);

	for(int v : values)
	{
		std::cout << v << " ";
	}
	std::cout << std::endl;
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
