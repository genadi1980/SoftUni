// 04Word.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"


#include <iostream>
#include <string>
#include <sstream>

#include "Initialization.h"
#include "CommandInterface.h"

int main()
{
	std::string text;
	std::getline(std::cin, text);

	std::shared_ptr<CommandInterface> interface = buildCommandInterface(text);

	std::string inputLine;
	std::getline(std::cin, inputLine);
	while (inputLine != "exit") {
		interface->handleInput(inputLine);
		std::getline(std::cin, inputLine);
	}

	std::cout << text << std::endl;

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
