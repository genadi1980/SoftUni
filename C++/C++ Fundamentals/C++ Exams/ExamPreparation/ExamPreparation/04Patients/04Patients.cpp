// 04Patients.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Patients
{
private:
	struct Name {
		string name;
		int numberOfVisits;
	} name;

	struct Date {
		int dayOfBirth;
		int month;
		int year;
	};

public:
	
	Date date;
	
	
	void Read();
	void Print();
	void PrintDate()
	{
		cout << "Birthday : " << date.dayOfBirth << "/" << date.month << "/" << date.year;
	}

	int GetVisit()
	{
		return this->name.numberOfVisits;
	}
	
};

void GetVisits(Patients p)
{
	p.GetVisit();
}

void Patients::Read()
{
	cout << "Enter name : ";
	cin >> name.name;
	cout << "Enter date of birthday (dd/yy/year) : " << endl;
	cout << "Enter date: ";
	cin >> date.dayOfBirth;
	cout << "Enter month: ";
	cin >> date.month;
	cout << "Enter year: ";
	cin >> date.year;
	cout << "Enter number of visits: ";
	cin >> name.numberOfVisits;
}

void Patients::Print()
{
	cout << "Name : " << name.name << endl;
	cout << "Visits : " << name.numberOfVisits << endl;
	PrintDate();
	cout << endl;
}


int main()
{
	vector<Patients> list;
	Patients p;
	int numberOfPatients = 0;
	int sum = 0;
	cout << "Enter number of patients : ";
	cin >> numberOfPatients;


	for (size_t i = 0; i < numberOfPatients; ++i)
	{
		p.Read();
		list.push_back(p);
	}
	cout << endl;
	
	vector<Patients>::iterator it;
	for (it = list.begin(); it != list.end(); ++it)
	{
		it->Print();
		sum += it->GetVisit();
		cout << endl;
	}

	cout << "Sum of visits : " << sum << endl;

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
