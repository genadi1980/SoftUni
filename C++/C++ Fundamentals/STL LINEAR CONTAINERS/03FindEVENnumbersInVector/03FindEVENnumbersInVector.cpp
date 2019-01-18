// 03FindEVENnumbersInVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> numbers;
	std::vector<int> even;
	int vectorSize;
	std::cin >> vectorSize;
	bool isFound = false;
	int counter = 0;

	for (int i = 0; i < vectorSize; i++)
	{
		int num = 0;
		std::cin >> num;
		numbers.push_back(num);

	}

	for (std::vector<int>::iterator number = numbers.begin(); number != numbers.end(); number++) {

		if (*number % 2 == 0) {

			isFound = false;
			++counter;
					
		}
		else {
			even.push_back(*number);
			isFound = true;
		}
	}


	if (isFound && counter == 0) {  
		std::cout << "EVEN not found";
	}
	else {

		for (int number : even) {

			std::cout << number;
		} 
	}

	std::cout << "\n";
}

