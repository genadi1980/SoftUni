// 00ConstMethods.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

class Company {
private:
	long long capitalDollars;
public:
	const std::string id;

	Company(std::string id, long long capitalDolars) : id(id), capitalDollars(capitalDollars){}

	void addCapital(long long dollars) {
		this->capitalDollars += dollars;
	}

	void print() const {
		std::cout << this->id << this->capitalDollars << std::endl;
	}
};
int main()
{
	Company c{ "GOOGINC.", 100000LL };
	const Company& constRef = c;

	std::cout << c.id << std::endl;

	constRef.print();
	c.addCapital(99999999999);
    
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
