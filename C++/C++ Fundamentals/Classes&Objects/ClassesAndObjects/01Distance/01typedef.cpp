// 01Distance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <map>
#include <vector>

typedef std::string TenStrings[10];


void printArray(TenStrings strings)
{
	for (int i = 0; i < 10; i++) {
		std::cout << strings[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	typedef unsigned long long ull;
	ull number = 42;

	TenStrings words = { "the", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog", "!" };

	printArray(words);
	std::cout << std::endl;

	typedef std::map<std::string, std::vector<int> > StudentScores;

	StudentScores judgeAssignment2Scores;
	judgeAssignment2Scores["ghost4e"] = { 100, 100, 100, 100 };
	judgeAssignment2Scores["Reclaimer"] = { 100, 80, 0, 100 };
	judgeAssignment2Scores["SpecificDude"] = { 100, 90, 100, 100 };

	for (StudentScores::iterator i = judgeAssignment2Scores.begin(); i != judgeAssignment2Scores.end(); i++)
	{
		std::cout << i->first << " ";
		for (int score : i->second)
		{
			std::cout << score << " ";
		}
		std::cout << std::endl;
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
