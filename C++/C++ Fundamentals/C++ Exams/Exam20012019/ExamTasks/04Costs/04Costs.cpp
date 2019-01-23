// 04Costs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

class Family
{
public:
	Family() 
	{

	}
	struct CONSUMPTIONS
	{
		int waterCon;
		int gasCon;
		int dailyEn;
		int nightEn;
		double rent;

	};

	struct BENEFITS
	{
		double motherSalary;
		double fatherSalary;
	};

	CONSUMPTIONS objectConsumptions;
	BENEFITS objectBenefits;
};
int main()
{

	Family p;
	const double dailyPrice = 0.13;
	const double nightPrice = 0.07;
	const int numberOfDays = 30;
	const double waterPrice = 1.65;
	const double gasPrice = 0.09;
	const int childMoney = 40;

	cin >> p.objectConsumptions.waterCon >> p.objectConsumptions.gasCon 
		>> p.objectConsumptions.dailyEn >> p.objectConsumptions.rent 
		>>p.objectConsumptions.nightEn >> p.objectBenefits.motherSalary 
		>> p.objectBenefits.fatherSalary;

	double EnergyT = p.objectConsumptions.dailyEn * dailyPrice + p.objectConsumptions.nightEn * nightPrice;
	double water = p.objectConsumptions.waterCon * waterPrice;
	double gas = p.objectConsumptions.gasCon * gasPrice;
	double allCosts = p.objectConsumptions.rent + water + gas + EnergyT + childMoney;
	double totalSalary = p.objectBenefits.fatherSalary + p.objectBenefits.motherSalary;
	double remSalary = totalSalary - allCosts;
	double moneyPerDay = remSalary / numberOfDays;

	cout << "Water : " << water << endl;
	cout << "Gas : " << gas << endl;
	cout << "Energy : " << EnergyT << endl;
	cout << "All costs : " << allCosts << endl;

	if (remSalary < 0) {
		cout << "Remaining Salary : " << remSalary << endl;
		cout << "You should find new job !" <<  endl;
	}
	else
	{
		cout << "Remaining Salary : " << remSalary << endl;
	}
	cout << "Money for one day : " << moneyPerDay << endl;

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
