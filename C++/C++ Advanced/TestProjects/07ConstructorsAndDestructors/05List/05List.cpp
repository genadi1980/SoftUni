// 05List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>

#include "List.h"

List mergeSortedLists(List a, List b) {
	List merged;

	while (!a.isEmpty() || !b.isEmpty()) {
		List * listToTakeFrom;
		if (a.isEmpty()) {
			listToTakeFrom = &b;
		}
		else if (b.isEmpty()) {
			listToTakeFrom = &a;
		}
		else {
			if (a.first() < b.first()) {
				listToTakeFrom = &a;
			}
			else {
				listToTakeFrom = &b;
			}
		}

		merged.add(listToTakeFrom->first());
		listToTakeFrom->removeFirst();
	}

	return merged;
}

int main()
{
	using namespace std;

	List sorted;

	string listLine;
	getline(cin, listLine);

	while (listLine != "end") {
		istringstream lineStream(listLine);

		List currentList;
		int value;
		while (lineStream >> value) {
			currentList << value;
		}

		sorted = mergeSortedLists(sorted, currentList);

		getline(cin, listLine);
	}

	cout << sorted.toString() << endl;

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
