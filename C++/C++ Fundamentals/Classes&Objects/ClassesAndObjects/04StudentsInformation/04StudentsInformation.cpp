// 04StudentsInformation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

class Student {
public:
	std::string name;
	std::string surname;
	double totalAvarage;



	Student(std::string name, std::string surname, double totalAvarage) :
		name(name),
		surname(surname),
		totalAvarage(totalAvarage) {
	}

};

void PrintAllInfo(Student student) {
	std::cout << student.name << " " << student.surname
		<< " " << student.totalAvarage
		<< std::endl;
}

int main()
{
	std::vector<Student> studentsList;
	int numberOfStudents = 0;
	std::cin >> numberOfStudents;

	for (unsigned long i = 0; i < numberOfStudents; ++i)
	{
		std::string name, surname;
		double score;
		std::cin >> name;
		std::cin >> surname;
		std::cin >> score;
		studentsList.push_back(Student(name, surname, score));
	}

	for (unsigned long i = 0; i < studentsList.size(); ++i)
	{
		PrintAllInfo(studentsList.at(i));
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
