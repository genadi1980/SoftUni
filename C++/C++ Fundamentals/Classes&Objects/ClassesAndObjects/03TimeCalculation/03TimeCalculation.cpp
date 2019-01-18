// 03TimeCalculation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Time
{
public:
	int hour = 0;
	int min = 0;
	int second = 0;



	Time() :
		hour(hour),
		min(min),
		second(second) {
	}

	~Time()
	{
	}
};

void calculateTimeandPrint(Time t) {


	int second = ((t.hour * 3600) + (t.min * 60) + t.second);
	int min = second / 60;
	int hour = min / 60;

	cout << hour << endl;
	cout << min << endl;
	cout << second << endl;


}




int main() {
	Time time;

	cin >> time.hour >> time.min >> time.second;

	calculateTimeandPrint(time);




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
