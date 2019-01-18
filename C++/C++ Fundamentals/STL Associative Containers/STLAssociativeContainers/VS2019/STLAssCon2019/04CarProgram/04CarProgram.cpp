// 04CarProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <map>
#include <utility>
#include <string>

int main()
{
	using namespace std;

	map<string,pair<string, int>> cars;

	int numberOfCars = 0;
	cin >> numberOfCars;

	string made = "";
	string model = "";
	int year = 0;

	for (unsigned long i = 0; i < numberOfCars; i++)
	{
		cin >> made >> model >> year;

		cars[made] = pair<string, int>(model, year);
	}

	map < string, pair<string, int> >::iterator it;
	int option = 0;
	cin >> option;
	cin.ignore();

	if (1 == option)
	{
		string manifacture = "";
		getline(cin, manifacture);

		it = cars.find(manifacture);
		if (it != cars.end())
		{
			cout << it->first << " " << it->second.first << " " << it->second.second << endl;
				 
		}
	}
	else if (2 == option) {
		for (it = cars.begin(); it != cars.end(); it++)
		{
			cout << it->first << " " << it->second.first << " " << it->second.second << endl;
		}
	}

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
