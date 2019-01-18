// 1FilterStudentsByMINvote.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>


class Student {

private:

	std::string name = "";
	std::string surname = "";
	
	unsigned short age = 0;

	double vote = 0;

public:

	Student(std::string name, std::string surname, unsigned short age, double vote)
	{
		this->name = name;
		this->surname = surname;
		this->age = age;
		this->vote = vote;
	}

	Student() {
		this->name = "N/A";
	}

	std::string GetName()
	{
		return this->name;
	}

	std::string GetSurname()
	{
		return this->surname;
	}

	unsigned short GetAge()
	{
		return this->age;
	}
	double GetVote()
	{
		return vote;
	}

	void InfoStudent()
	{

		std::cout << "Name -> " << GetName() << " " << GetSurname() << std::endl;
		std::cout << "Age -> " << GetAge() << std::endl;
		std::cout << "Vote -> " << GetVote() << std::endl;

	}
		
};



void FilterByVote(double minVote, std::vector<Student> & listOfStudents);

int main()
{
	std::vector<Student> listOfStudents;
	int numberOfStudents = 0;
	double minVote = 0;
	std::cout << "How many students you want to input ?" << std::endl;
	std::cin >> numberOfStudents;

	

	for (int i = 0; i < numberOfStudents; i++)
	{
		std::string name = "";
		std::string surname = "";
		int age = 0;
		double vote = 0;
		
		std::cout << "Enter name: " << std::endl;
		std::cin >> name;
		
		std::cout << "Enter surname: " << std::endl;
		std::cin >> surname;

		std::cout << "Enter age: " << std::endl;
		std::cin >> age;

		std::cout << "Enter vote(the vote can be with decimal point) : " << std::endl;
		std::cin >> vote; 

		Student student(name, surname, age, vote);

		listOfStudents.push_back(student);	

	}

	std::cout << "Which is the minimal vote that you would like to filter?" << std::endl;
	std::cin >> minVote;

	std::cout << "The students with MIN vote -> "<< minVote << " are:" << std::endl;
	
	FilterByVote(minVote, listOfStudents);

}

void FilterByVote(double minVote, std::vector<Student> & listOfStudents) 
{
	bool isIn = false;
	for (int i = 0; i < listOfStudents.size(); i++)
	{
		
		if (minVote <= listOfStudents.at(i).GetVote())
		{
			listOfStudents.at(i).InfoStudent();
		}

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
