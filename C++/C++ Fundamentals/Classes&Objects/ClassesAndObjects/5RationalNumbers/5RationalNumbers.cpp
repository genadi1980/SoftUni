// 5RationalNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

class RationalNumber
{
private:
	int num, den;

public:
	RationalNumber() : 
		num(0), den(1) {}
	
	void SetNum(int other)
	{
		this->num = other;
	}

	int GetNum()
	{
		return num;
	}

	void SetDen(int other)
	{
		if (other == 0)
		{
			cout << "The denominator can't be 0, the denominator will be set to 1" << endl;

			other = 1;
		}

		this->den = other;
	}

	int GetDen() 
	{
		return den;
	}

	void Print()
	{
		cout << num << "/" << den << endl;
	}
};

RationalNumber GetSum(RationalNumber r1, RationalNumber r2)
{
	RationalNumber result;
	result.SetNum(r1.GetNum() * r2.GetDen() - r2.GetNum() * r1.GetDen());
	result.SetDen(r1.GetDen() * r2.GetDen());

	return result;
}

RationalNumber GerDifference(RationalNumber r1, RationalNumber r2)
{
	RationalNumber result;
	result.SetNum(r1.GetNum() * r2.GetNum() - r2.GetNum * r1.GetDen());
	result.SetDen(r1.GetDen() * r2.GetDen());

	return result;
}

RationalNumber GetMultiplication(RationalNumber r1, RationalNumber r2)
{
	RationalNumber result;
	result.SetNum
}

int main()
{
    std::cout << "Hello World!\n"; 
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
