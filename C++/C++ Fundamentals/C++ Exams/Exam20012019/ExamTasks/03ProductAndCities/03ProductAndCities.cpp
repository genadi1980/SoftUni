// 03ProductAndCities.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <map>
#include <utility>
#include <string>

using namespace std;

int main()
{

	map<string, double> list;
	string city = "";
	int productQuantity = 0;
	double price = 0.0;
	int numberOfCities = 0;

	cin >> numberOfCities;
	cin.ignore();

	while (true)
	{
		getline(cin, city);
		cin >> price;
		cin.ignore();
		cin >> productQuantity;
		cin.ignore();		
		list[city] += price * productQuantity;

		if (list.size() == numberOfCities) {
			break;
		}
	}
	

	

	map<string, double>::iterator it;

	for ( it = list.begin(); it != list.end(); ++it)
	{
		cout << it->first << " " << it->second << endl;
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
