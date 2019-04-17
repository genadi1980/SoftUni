// 02Differences.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Includes.h"

std::vector<std::pair<City, City> > readCitiesToCompare(int num) {
	std::vector<std::pair<City, City> > result;
	for (int i = 0; i < num; i++) {
		City a, b;
		std::cin >> a >> b;
		result.push_back(std::make_pair(a, b));
	}

	return result;
}

std::vector<CityDiff> getDifferences(std::vector<std::pair<City, City> > pairs) {
	std::vector<CityDiff> differences;

	for (auto p : pairs) {
		differences.push_back(p.first - p.second);
	}

	return differences;
}

template<typename T>
void printVector(const std::vector<T>& v) {
	for (auto item : v) {
		std::cout << item;
	}
}

int main() {
	int numComparisons;
	std::cin >> numComparisons;
	std::vector<CityDiff> differences = getDifferences(readCitiesToCompare(numComparisons));

	printVector(differences);

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
