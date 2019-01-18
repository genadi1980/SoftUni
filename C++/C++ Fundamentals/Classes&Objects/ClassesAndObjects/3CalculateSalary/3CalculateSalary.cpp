// 3CalculateSalary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

class Employee
{
private:
	struct Name {
		std::string firstName = "";
		std::string lastName = "";
	}  name;

	struct Work {
		int hours;
		double salary;
	};

	
	Work w;
public:
	void Read();
	void Print();
};

void Employee::Read()
{
	std::cout << "Enter name : " << std::endl;
	std::cin >> name.firstName;
	std::cout << "Enter surname : " << std::endl;
	std::cin >> name.lastName;
	std::cout << "Enter salary per Hour: " << std::endl;
	std::cin >> w.salary;
	std::cout << "Enter Hours: " << std::endl;
	std::cin >> w.hours;

}

void Employee::Print()
{
	std::cout << name.firstName << " " << name.lastName << std::endl;
	std::cout << "Worked hours : " << w.hours << std::endl;
	std::cout << "Total Salary : " << w.hours * w.salary << std::endl;

}

int main()
{  
	Employee e;
	e.Read();
	e.Print();

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
