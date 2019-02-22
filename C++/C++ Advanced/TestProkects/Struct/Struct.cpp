// Struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Zad100.cpp Данни за студенти

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>

const int NUM = 5;

struct student
{
	int facnum;
	char name[26];
	double marks[NUM];
};

void read_student(student&);
void print_student(const student&);
void sorttable(int, student*[]);
double average(double*);

int main()
{
	using namespace std;
	cout << setprecision(2) << setiosflags(ios::fixed);
	student table[30];
	student* ptable[30];
	int n;
	do
	{
		cout << "number of students? ";
		cin >> n;

	} while (n < 1 || n > 30);

	int i;
	for (i = 0; i <= n - 1; i++)
	{
		read_student(table[i]);
	ptable[i] = &table[i];
    }

	cout << "Table: \n";
	for ( i = 0; i <= n-1; i++)
	{
		print_student(table[i]);
		cout << endl;
	}

	sorttable(n, ptable);
	cout << "\n New Table: \n";
	for(i=0; i <= n-1;i++)
	{
		print_student(*ptable[i]);
		cout << setw(7) << average(ptable[i]->marks) << endl;

	}

	return 0;
}

void read_student(student& s)
{
	std::cout << "facnum: ";
	std::cin >> s.facnum;
	char p[100];
	std::cin.getline(p, 100);
	std::cout << "name: ";
	std::cin.getline(s.name, 26);
	for (int i = 0; i <= NUM - 1; i++)
	{
		std::cout << i << "-th mark: ";
		std::cin >> s.marks[i];
	}
	
}

void print_student(const student& stud)
{
	std::cout << std::setw(6) << stud.facnum << std::setw(30) << stud.name;
	for (int i = 0; i <= NUM - 1; i++)
	{
		std::cout << std::setw(6) << stud.marks[i];
	}

}

void sorttable(int n, student* a[])
{
	for (int i = 0; i <= n-2; i++)
	{
		int k = i;
		double max = average((*a[i]).marks);
		for (int j = i + 1; j <= n - 1; j++)
		{
			if (average(a[j]->marks) > max)
			{
				max = average(a[j]->marks);
				k = j;
			}
		}

		student* x;
		x = a[i]; a[i] = a[k]; a[k] = x;
	}
}

double average(double* a)
{
	double s = 0;
	for (int j = 0; j <= NUM - 1; j++)
		s += a[j];
	return s / NUM;

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
