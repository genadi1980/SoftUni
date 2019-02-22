// 00Namespaces.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

namespace SoftUni {
	namespace CppFundamentals {
		const int lecturesSize = 6;
		std::string lecturesFund[lecturesSize]{ "Variables", "Cicles", "Vectors", "Arrays", "Sets", "Hash Table" };
	}

	namespace CppAdvanced {
		using namespace std;

		vector<string> lectures = { "Pointers and References" , "Classes", "Templates", "Advanced Class Members" };
	}
}

int main()
{
	for (std::string s : SoftUni::CppFundamentals::lecturesFund)
	{
		std::cout << s << '\n';
	}

	std::cout << std::endl;

	for (std::string s : SoftUni::CppAdvanced::lectures)
	{
		std::cout << s << '\n';
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
