// RationalNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>

struct rat
{
	int num;
	int den;
	void makerat(int, int);
	int numer();
	int denom();
	void printrat();
};

void rat::printrat()
{
	std::cout << num << "/" << den << std::endl;
}


int gcd(int a, int b)
{
	while (a!=b)
	{
		if (a > b) a = a - b; else b = b - a;
		return a;
	}
}

void rat::makerat(int a, int b)
{
	if (a == 0) { num = 0; den = 1; }
	else
	{
		int g = gcd(abs(a), abs(b));
		if (a > 0 && b > 0 || a < 0 && b < 0)
		{
			num = abs(a) / g;
			den = abs(b) / g;
		}
		else
		{
			num = -abs(a) / g;
			den = abs(b) / g;
		}
	}
}

int rat::numer()
{
	return num;
}

int rat::denom()
{
	return den;
}

rat sumrat(rat& r1, rat& r2)
{
	rat r; 
	r.makerat(r1.numer() * r2.denom() +
		r2.numer() * r1.denom(),
		r1.denom() * r2.denom());
	return r;
}

rat subrat(rat& r1, rat& r2)
{
	rat r;
	r.makerat(r1.numer() * r2.denom() -
		r2.numer() * r1.denom(),
		r1.denom()*r2.denom());
	
	return r;
}

rat multrat(rat& r1, rat& r2)
{
	rat r; r.makerat(r1.numer()*r2.numer(),
		r1.denom()*r2.numer());
	return r;
}

rat quotrat(rat& r1, rat& r2)
{
	rat r;
	r.makerat(r1.numer() * r2.numer(),
		r1.denom() * r2.denom());
	return r;
}

int main()
{
	rat r1;
	r1.makerat(5, 8);
	rat r2; 
	r2.makerat(6, 9);

	sumrat(r1, r2).printrat();
	subrat(r1, r2).printrat();
	multrat(r1, r2).printrat();
	quotrat(r1, r2).printrat();

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
