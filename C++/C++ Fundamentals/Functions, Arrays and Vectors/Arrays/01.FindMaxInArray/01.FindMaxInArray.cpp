// 01.FindMaxInArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int FindMaxInArray(vector<int> array)
{
	int max = INT_MIN;

	for (int i = 0; i < array.size(); i++)
	{
		if (array.at(i) > max)
		{
			max = array.at(i);
		}
	}

	return max;
}


int main()
{
	 int n, max = 0;

	cout << "Enter array size: " << endl;

	cin >> n;

	
	vector<int> myArray;
	 
	for (int i = 0; i < n; i++)
	{
		int num = 0;
		cout << "Enter number: " << endl;

		cin >> num;
		myArray.push_back(num);
	}

	max = FindMaxInArray(myArray);

	cout << "The biggest number in array is : " << max << endl;

	return 0;
}
