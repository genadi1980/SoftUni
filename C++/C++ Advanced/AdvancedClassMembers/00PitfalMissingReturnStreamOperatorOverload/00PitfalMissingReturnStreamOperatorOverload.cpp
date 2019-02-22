// 00PitfalMissingReturnStreamOperatorOverload.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>


class Price {
	int cents;
	std::string currency;
public:
	Price() {}

	Price(int cents, std::string currency) : cents(cents), currency(currency) {}

	int getCents() const {
		return this->cents;
	}

	std::string getCurrency() const {
		return this->currency;
	}

	friend std::istream& operator>>(std::istream& in, Price& p);
};

Price operator+(const Price& a, const Price& b) {
	std::string resultCurrency = a.getCurrency();
	if (a.getCurrency() != b.getCurrency()) {
		resultCurrency = "[invalid]";
	}

	return Price(a.getCents() + b.getCents(), resultCurrency);
}

std::ostream& operator<<(std::ostream& out, const Price& p) {
	return out << p.getCents() << " " << p.getCurrency();
}

std::istream& operator>>(std::istream& in, Price& p) {
	return in >> p.cents >> p.currency;
}
int main()
{
	Price a, b;
	std::cin >> a >> b;

	Price sum = a + b;
	std::cout << sum << std::endl;

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
