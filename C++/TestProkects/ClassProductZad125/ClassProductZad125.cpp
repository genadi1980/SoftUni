// ClassProductZad125.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
char s[40];

class product
{
private:
	char* _name;
	double price;
	int score;

public:
	product();
	~product();

	void print() const;
	bool is_better_than(product const &) const;
	char* get_name() const;
	double get_price() const;
	int get_score() const;
};

void sorttable(int n, product* a[]);

int main()
{
	cout << setprecision(4) << setiosflags(ios::fixed);
	cout << "size: ";
	int size = 0;
	cin >> size;

	//create a dinamic array with size objects

	product* table = new product[size];

	//allocate memorty for a dinamic array of pointers
	//size object product

	product** ptable = new product*[size];

	cout << "table: \n";
	for (int i = 0; i < size-1; ++i)
	{	
		table[i].print();
		cout << endl;
		ptable[i] = &table[i];
	}

	sorttable(size, ptable);
	cout << " \n New Table: \n";
	for (int i = 0; i < size-1; ++i)
	{
		ptable[i]->print();
		cout << setw(7)
			<< ptable[i]->get_score() / ptable[i]->get_price()
			<< endl;
	}

	delete[size] table;
	delete[] ptable;

	return 0;
}

product::product()
{
	cout << "name: ";
	cin >> s;
	_name = new char[strlen(s) + 1];
	std::strcpy(_name, s);
	cout << "score: ";
	cin >> score;
}

product::~product()
{
	delete _name;
}

void product::print() const
{
	cout << setw(25) << _name
		<< setw(10) << price
		<< setw(12) << score;
}

bool product::is_better_than(product const & x) const
{
	return score / price > x.score / x.price;
}

char* product::get_name() const
{
	return _name;
}

double product::get_price() const
{
	return price;
}

int product::get_score() const
{
	return score;
}

void sorttable(int n, product* a[])
{
	for (int i = 0; i < n-2; ++i)
	{
		int k = i;
		product* max = a[i];
		for(int j = i+1; j <= n-1; ++j)
			if(a[j]->is_better_than(*max))
			{
				max = a[j];
				k = j;
			}
		max = a[i];
		a[i] = a[k];
		a[k] = max;
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
