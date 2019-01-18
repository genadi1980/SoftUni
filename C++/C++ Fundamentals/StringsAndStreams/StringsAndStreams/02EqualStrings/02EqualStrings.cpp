// 02EqualStrings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>


int main()
{
	std::string str1;
	getline(std::cin, str1);

	std::string str2;
	getline(std::cin, str2);



	if (str1 == str2) {
		std::cout << "Equal" << std::endl;
	}
	else {
		std::cout << "Not Equal" << std::endl;
	}

}
