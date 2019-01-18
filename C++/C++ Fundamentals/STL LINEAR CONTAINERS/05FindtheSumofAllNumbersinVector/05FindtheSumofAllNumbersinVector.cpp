// 05FindtheSumofAllNumbersinVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>



int main()
{
	std::vector<int> numbers;
	int sum = 0;
	int vectorSize = 0;
	std::cin >> vectorSize;

	for (size_t i = 0; i < vectorSize; i++)	{
		int num = 0;
		std::cin >> num;
		numbers.push_back(num);
	}

	for (std::vector<int>::iterator element = numbers.begin(); element != numbers.end(); ++element) {

		sum += *element;
		
	}

	std::cout << sum << std::endl;
		
	return 0;
}