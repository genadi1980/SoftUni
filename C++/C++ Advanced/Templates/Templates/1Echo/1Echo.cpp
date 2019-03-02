// 1Echo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "Echo.h"
#include "EmailContact.h"
#include "ContactManagerUI.h"

int main() {
	echoOn = true;

	echo("=== Contact Manager (C) Deluxe Edition ===");

	echo("Hints on? (y/n): ");
	char enableHintsInput = ' ';
	while (enableHintsInput != 'y' && enableHintsInput != 'n') {
		std::cin >> enableHintsInput;
		enableHintsInput = tolower(enableHintsInput);
	}
	echoOn = enableHintsInput == 'y';

	std::vector<EmailContact> contacts;
	ContactManagerUI ui(contacts, echoOn);
	ui.start();

	echo("Thank you for using Contact Manager (C) Deluxe!");

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
