// Filter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <ostream>

template<typename T>
std::ostream& operator<<(std::ostream& stream, const std::vector<T>& v) {
	for (T item : v) {
		stream << item << " ";
	}

	return stream;
}

std::vector<int> filter(std::vector<int>& numbers, bool(*shouldFilter)(int)) {
	std::vector<int> filtered;

	for (int n : numbers) {
		if (shouldFilter(n)) {
			filtered.push_back(n);
		}
	}

	return filtered;
}

bool isEven(int number) {
	return number % 2 == 0;
}

int main()
{
	using namespace std;
	std::vector<int> values = {1, 2, 3, 4, 5, 6, 7, 8};
	cout << filter(values, [](int n) {
		return n > 3;

	});

	cout << endl;

	cout << "===============" << endl;

	cout << filter(values, isEven);
	cout << endl;

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
