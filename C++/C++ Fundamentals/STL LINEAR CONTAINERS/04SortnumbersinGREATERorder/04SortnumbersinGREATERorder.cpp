// 04SortnumbersinGREATERorder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <list>


int main()
{
	std::list<int> numbers;
	std::list<int> sorted;
	int sizeOfList = 0;
	std::cin >> sizeOfList;

	for (unsigned long i = 0; i < sizeOfList; i++)
	{
		int num = 0;
		std::cin >> num;
		numbers.push_back(num);
	}

	numbers.sort();
	numbers.reverse();
	for (auto it = numbers.begin(); it != numbers.end(); ++it)
		std::cout << *it;
	std::cout << std::endl;
	return 0;
}