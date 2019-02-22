// 00Friends.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <istream>
#include <string>

class Company {
private:
	std::string id;
	long long capitalDollars;

public:
	Company() {}
	Company(std::string inputId, long long capitalDollarsIn)
		: id(inputId)
		, capitalDollars(capitalDollarsIn) {
	}

	void print() {
		std::cout << this->id << " (" << this->capitalDollars << ")" << std::endl;
	}

	friend void getCompany(std::istream& id, Company& c);
};

void getCompany(std::istream& in, Company& c) {
	in >> c.id >> c.capitalDollars;
}
int main()
{ 
	Company c;
	getCompany(std::cin, c);
	c.print();
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
