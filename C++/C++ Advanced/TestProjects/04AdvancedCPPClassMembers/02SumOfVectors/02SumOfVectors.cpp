// 02SumOfVectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "SumOfVectors.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void PrintSum(const vector<string>& vecResult) {
	for (int i = 0; i < vecResult.size(); i++) {
		cout << vecResult[i] << endl;
	}
}

int main()
{
	int nSizeOfVectors;

	cin >> nSizeOfVectors;

	vector<string> vec1;

	vector<string> vec2;

	for (int i = 0; i < nSizeOfVectors; i++) {
		string strToPush;

		cin >> strToPush;

		vec1.push_back(strToPush);
	}

	for (int i = 0; i < nSizeOfVectors; i++) {
		string strToPush;

		cin >> strToPush;

		vec2.push_back(strToPush);
	}

	vector<string>vec3 = vec1 + vec2;

	PrintSum(vec3);

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
