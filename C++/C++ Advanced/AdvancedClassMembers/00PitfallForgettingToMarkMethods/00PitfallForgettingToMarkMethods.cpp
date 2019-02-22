// 00PitfallForgettingToMarkMethods.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

class Person
{
	int age;
public: 
	const std::string name;

	Person(std::string name, int age) : name(name), age(age) {};

	int getAge() const {
		return this->age;
	}
	
};

void printOlderPerson(const Person& a, const Person& b) {
	if (a.getAge() >= b.getAge()) {
		std::cout << a.name << std::endl;
	}
	else {
		std::cout << b.name << std::endl;
	}
}

int main()
{
	Person a{ "joro", 56 };
	Person b{ "ben dover", 46 };

	printOlderPerson(a, b);

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
