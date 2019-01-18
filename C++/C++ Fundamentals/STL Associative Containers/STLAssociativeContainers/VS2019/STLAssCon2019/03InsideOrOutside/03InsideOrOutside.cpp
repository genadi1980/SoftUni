// 03InsideOrOutside.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <utility>



std::vector< std::pair<int, int> > ReadCoords(std::vector< std::pair<int, int> > & coords);

bool InOut(std::vector< std::pair<int, int> > & coords);


int main()
{
	
	using namespace std;

	vector< pair<int, int> > coords;

	ReadCoords(coords);

	int x3, y3;	

	
	cin >> x3 >> y3;
	coords.push_back({ x3, y3 });	

		if (InOut(coords))
		{
			cout << "Check point is inside" << endl;
		}
		else
		{
			cout << "Check point is outside" << endl;
		}
	


	return 0;
}


std::vector< std::pair<int, int> > ReadCoords(std::vector< std::pair<int, int> > & coords)
{
	int x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;
	coords.push_back({ x1, y1 });
	coords.push_back({ x2, y2 });

	return  coords;
}


bool InOut(std::vector< std::pair<int, int> > & coords)
{
	if (coords.at(2).first >= coords.at(0).first && coords.at(2).first <= coords.at(1).first
		&& coords.at(2).second >= coords.at(0).second && coords.at(2).second <= coords.at(1).second)
	{
		return true;
	}
	else
	{
		return false;
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
