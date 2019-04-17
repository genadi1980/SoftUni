// 02BytesParsing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include "Defines.h"

ErrorCode parseData(const std::string &      commands,
	const char *             rawDataBytes,
	const size_t	   	     rawDataBytesCount,
	std::vector<long long> & outParsedNumbers);

void printResult(const ErrorCode                errorCode,
	const std::vector<long long> & parsedNumbers);

int main()
{
	std::string 	       commands;
	std::string 	       rawDataInput;
	std::vector<long long> parsedNumbers;

	getline(std::cin, commands);
	getline(std::cin, rawDataInput);

	//Transforming ASCII values to integer values
	for (size_t i = 0; i < rawDataInput.size(); ++i)
	{
		rawDataInput[i] -= '0';
	}

	const ErrorCode errorCode = parseData(commands,
		rawDataInput.c_str(),
		rawDataInput.size(),
		parsedNumbers);

	printResult(errorCode, parsedNumbers);

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
