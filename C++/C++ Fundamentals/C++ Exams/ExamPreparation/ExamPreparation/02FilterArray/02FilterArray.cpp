// 02FilterArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

void Read(std::vector<char> & symbols, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		char symbol;

		std::cout << "array[" << i << "] = ";
		std::cin >> symbol;
		symbols.push_back(symbol);
	}
}

//void FilterArray(std::vector<char> & symbols)
//{
//	std::vector<char>::iterator it;
//	for (it = symbols.begin(); it != symbols.end(); ++it)
//	{
//		if (*it >= '0' && *it <= '9')
//		{
//			std::cout << *it << " ";
//			
//		}
//
//		else if (*it >= 'a' && *it <= 'z')
//		{
//			
//			std::cout << *it << " ";
//			
//		}
//		
//		else
//		{
//			std::cout << *it << " ";
//			
//		}
//	}
//}
void Print(std::vector<char> arr)
{
	for (std::vector<char>::iterator it = arr.begin(); it != arr.end(); it++)
	{
		std::cout << *it << " ";
	}
}

int main()
{
	int SIZE = 0;
	std::vector<char> symbols;
	std::vector<char> numbers;
	std::vector<char> lowercase;
	std::vector<char> other;

	std::cout << "Enter size of array : ";
	std::cin >> SIZE;

	Read(symbols, SIZE);
	//FilterArray(symbols);
	std::vector<char>::iterator it;
	for (it = symbols.begin(); it != symbols.end(); ++it)
	{
		if (*it >= '0' && *it <= '9')
		{
			numbers.push_back(*it );

		}

		else if (*it >= 'a' && *it <= 'z')
		{

			lowercase.push_back(*it);

		}

		else
		{
			other.push_back(*it);

		}
	}
	
	Print(numbers);
	std::cout << std::endl;
	Print(lowercase);
	std::cout << std::endl;
	Print(other);
	std::cout << std::endl;
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
