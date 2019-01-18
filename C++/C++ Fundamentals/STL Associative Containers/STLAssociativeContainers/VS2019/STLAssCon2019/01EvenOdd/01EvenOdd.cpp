// 01EvenOdd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <utility>
#include <map>

int main()
{
	std::map<int, std::string> nums;

	int input = 0;
	std::cin >> input;

	for (int i = 0; i < input; i++) {

		if (i % 2 == 0) {
			nums.insert(std::pair<int, std::string>{ i, "EVEN"});
		}
		else {
			nums.insert(std::pair<int, std::string>{ i, "ODD"});
		}
	}

	std::map<int, std::string>::iterator it;
	for (it = nums.begin(); it != nums.end(); it++) 
	{
		std::cout << "KEY: " << it->first << " VALUE: " << it->second <<  std::endl;
	}
	
	std::cout << std::endl;
	return 0;
}
