// 4DevideBy45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "BigInt.h"
#include <iostream>

bool isDivisibleBy5(const BigInt & num) {
	const std::string digits = num.getDigits();
	const size_t SIZE = digits.size();
	const char DIGIT_CHAR = digits[SIZE - 1] - '0';

	if (DIGIT_CHAR == 0 || DIGIT_CHAR == 5) {
		return true;
	}
	return false;

}

bool isDivisibleBy9(const BigInt & num) {
	const std::string digits = num.getDigits();
	const size_t SIZE = digits.size();
	int sum = 0;
	
	for (size_t i = 0; i < SIZE; i+=1)
	{
		sum += (digits[i] - '0');
	}

	if (sum % 9 == 0) {
		return true;
	}
	return false;
}

int main()
{
	std::string firstRange;
	std::string secondRange;

	std::getline(std::cin, firstRange);
	std::getline(std::cin, secondRange);

	BigInt firstBigInt(firstRange);
	BigInt secondBigInt(secondRange);

	for (BigInt i = firstBigInt; i < secondBigInt; i += 1) {
		if (isDivisibleBy5(i) && isDivisibleBy9(i)) {
			firstBigInt = i;
			break;
		}
	}

	for (BigInt i = firstBigInt; i < secondBigInt; i += 45) {
		std::cout << i << std::endl;
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
