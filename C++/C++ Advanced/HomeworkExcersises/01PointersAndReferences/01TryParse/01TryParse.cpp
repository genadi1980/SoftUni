// 01TryParse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "TryParse.h"


#include <iostream>
#include <string>


int main()
{
	std::string firstInput;
	std::string secondInput;

	int a = 0; int b = 0;
	std::cin >> firstInput >> secondInput;

	bool parseA = tryParse(firstInput, a);
	bool parseB = tryParse(secondInput, b);

	if (parseA && parseB) {
		std::cout << a + b << std::endl;
	}
	else {
		if (parseA) {
			std::cout << a << std::endl;
		}
		else {
			std::cout << "[error]" << firstInput << std::endl;
		}

		if (parseB) {
			std::cout << b << std::endl;
		}
		else {
			std::cout << "[error]" << secondInput << std::endl;
		}
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
