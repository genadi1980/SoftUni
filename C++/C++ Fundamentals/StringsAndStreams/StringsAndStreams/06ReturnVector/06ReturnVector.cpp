// 06ReturnVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

std::vector<int> ReturnVector(int n) {
	std::vector<int> x;
	
	for (int i = 0; i < n; i++)
	{
		int num = 0;
		std::cin >> num;
		x.push_back(num);
	}

	return x;
}

void PrintVector(std::vector<int> arr) {
		
	for(int i = 0; i < arr.size(); i++)
	{
		std::cout << arr.at(i) << std::endl;
		
	}
}
int main()
{
	
	std::vector<int> numbers;
	int n = 0;
	std::cin >> n;
	numbers = ReturnVector(n);
	PrintVector(numbers);
    
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
