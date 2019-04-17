// 01Memory Allocator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include "Defines.h"

ErrorCode executeCommand(const std::string &  command,
	std::vector<int *> & memory);

void printResult(const ErrorCode     errorCode,
	const std::string & command);

int main()
{
	std::string        command;
	int                memorySize = 0;
	int 			   inputSize = 0;
	std::vector<int *> memory;

	std::cin >> memorySize >> inputSize;
	std::cin.ignore();

	memory.resize(memorySize, nullptr);

	for (int i = 0; i < inputSize; ++i)
	{
		getline(std::cin, command);

		const ErrorCode errorCode = executeCommand(command, memory);

		printResult(errorCode, command);
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
