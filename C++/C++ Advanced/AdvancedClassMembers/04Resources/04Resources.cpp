// 04Resources.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <set>
#include <map>

#include "ResourceType.h"
#include "Resource.h"

int main() {
	using SoftUni::Resource;
	using SoftUni::ResourceType;

	std::set<Resource> resources;
	std::map<ResourceType, int> numberOfResourcesByType;

	int numResources;

	std::cin >> numResources;

	for (int i = 0; i < numResources; i++) {
		Resource r;

		std::cin >> r;

		resources.insert(r);
	}

	for (const auto r : resources) {
		numberOfResourcesByType[r.getType()]++;
	}

	std::cout << "... by id:" << std::endl;

	for (const auto r : resources) {
		std::cout << r << std::endl;
	}

	std::cout << "... by type:" << std::endl;
	for (auto pair : numberOfResourcesByType) {
		std::cout << pair.first << ": " << pair.second << std::endl;
	}

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
