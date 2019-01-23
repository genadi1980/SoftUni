// 02Planet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<math.h>

class Planet
{
private:
	std::string name = "";
	long distance = 0;
	long diameter = 0;
	long mass = 0;	
	const long light = 299792;

public:
	Planet(std::string name, long distance, long diameter, long mass)
	{
		this -> name = name;
		this->distance = distance;
		this->diameter = diameter;
		this->mass = mass;
	}

	//Getters
	std::string GetName()
	{
		return this->name;
	}

	long GetDistance()
	{
		return this->distance;
	}

	long GetDiameter()
	{
		return this->diameter;
	}

	long GetMass()
	{
		return this->mass;
	}
	
	//Functions
	void GetTime()
	{
		long time = 0;
		time = GetDistance() / light;

		std::cout << time << std::endl;
	}

	void PrintPlanetInfo()
	{
		std::cout << GetName() << " " << GetDistance() << " " << GetDiameter() << " " << GetMass() << std::endl;
	}


};


void GetMinMass(std::vector<Planet> & list)
{
	int min = LONG_MAX;
	for (int i = 0; i < list.size(); ++i)
	{

		long currentValue = list.at(i).GetDiameter();
		if (currentValue < min)
		{
			min = currentValue;
		}

	}
	std::cout << min << std::endl;
}

void GetMaxDiam (std::vector<Planet> & list)
{
	int max = LONG_MIN;
	for (int i = 0; i < list.size(); ++i)
	{

		long currentValue = list.at(i).GetMass();
		if (currentValue > max)
		{
			max = currentValue;
		}

	}
	std::cout << max << std::endl;
}

int main()
{
	std::vector<Planet> listPl;
	int numOfPlanets = 0;
	std::cin >> numOfPlanets;
	std::cin.ignore();

	for (int i = 0; i < numOfPlanets; ++i)
	{
		std::string name;
		long distance;
		long diameter;
		long mass;
		getline(std::cin, name);
		std::cin >> distance >> diameter >> mass;
		std::cin.ignore();
		Planet p(name, distance, diameter, mass);
		listPl.push_back(p);
		p.PrintPlanetInfo();
		p.GetTime();

	}
	GetMinMass(listPl);
	GetMaxDiam(listPl);
	
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
