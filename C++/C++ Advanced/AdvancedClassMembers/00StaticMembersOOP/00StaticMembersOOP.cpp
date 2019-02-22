// 00StaticMembersOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Company {
	
public:
	static const int ID_LENGTH = 8;
	static int CREATED_COMPANIES;


	string id;
	long long capitalDolalrs;

	Company() {
		CREATED_COMPANIES++;
	}
	static string generateID()
	{
		string id(ID_LENGTH, ' '); 
		for (int i = 0; i < ID_LENGTH; ++i)
			id[i] = 'A' + rand() % (1 + 'Z' - 'A');
		return id;
	}
};

int Company::CREATED_COMPANIES = 0;

int main()
{
	/*Company randomIdCompany(Company::generateID(), 100);
	Company z{ string(Company::ID_LENGTH, 'Z'), 1000 };*/

	Company a{}; 
	Company b{};
	Company c{};

	cout << Company::CREATED_COMPANIES;
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
