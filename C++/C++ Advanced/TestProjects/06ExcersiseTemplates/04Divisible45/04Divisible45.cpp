// 04Divisible45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#include "BigInt.h"

size_t digitSum(const BigInt & number) {
	size_t sum = 0;
	std::string digits = number.getDigits();
	for (size_t i = 0; i < digits.size(); i++) {
		sum += digits[i] - '0';
	}

	return sum;
}

bool dividesBy9(const BigInt & number) {
	return digitSum(number) % 9 == 0;
}

bool dividesBy5(const BigInt & number) {
	std::string digits = number.getDigits();
	int lastInd = digits.size() - 1;
	return digits[lastInd] == '0' || digits[lastInd] == '5';
}

int main()
{
	std::string rangeStartStr;
	std::string rangeEndStr;

	std::cin >> rangeStartStr >> rangeEndStr;

	BigInt rangeEnd(rangeEndStr);

	BigInt firstInRange;
	for (BigInt num = rangeStartStr; num < rangeEnd; num += 1) {
		if (dividesBy5(num) && dividesBy9(num))
		{
			firstInRange = num;
			break;
		}
	}

	for (BigInt num = firstInRange; num < rangeEnd; num += 45) {
		std::cout << num << std::endl;
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
