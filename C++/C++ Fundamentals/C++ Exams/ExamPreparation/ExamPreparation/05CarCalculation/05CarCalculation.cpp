// 05CarCalculation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

class Auto
{
	struct Tank
	{
		std::string stationFuel;
		double pricePerLiter;
		int traveled;
	};

	std::string make;
	std::string model;
	std::string typeOfFuel;
	double consumption;

	Tank tank;
public:
	Auto(std::string make, std::string model, std::string typeOfFuel, double consumption)
	{
		this->make = make;
		this->model = model;
		this->consumption = consumption;
	}
	Auto()
	{

	}
	//Getters
	std::string GetMake()
	{
		return this->make;
	}

	std::string GetModel()
	{
		return this->model;
	}

	std::string GetFuel()
	{
		return this->typeOfFuel;
	}

	double GetConsumption()
	{
		return this->consumption;
	}

	double GetConPerLiter()
	{
		return consumption * tank.traveled / 100.0;
	}

	double GetMoney()
	{
		return GetConPerLiter() * tank.pricePerLiter;
	}
	
	//Setters
	void SetFuelType(std::string fuelType)
	{
		if (typeOfFuel == "diesel"
			|| typeOfFuel == "gasoline"
			|| typeOfFuel == "gpl")
		{
			this->typeOfFuel = fuelType;
		}
		else
		{
			std::cout << "Please, enter the correct fuel type...";
				std::cin >> fuelType;
				this->typeOfFuel = fuelType;

		}
	}

	

	void Read()
	{
		std::cout << "Enter Make: ";
		std::cin >> make;
		std::cout << "Enter Model: ";
		std::cin >> model;
		std::cout << "Enter Fuel Type: ";
		std::cin >> typeOfFuel;
		SetFuelType(typeOfFuel);
		std::cout << "Enter Consumption ( l/100km ): ";
		std::cin >> consumption;
		std::cout << "Gas Station Fuel will be set as " << GetFuel() << std::endl;
		
		std::cout << "Enter Price per Liter : ";
		std::cin >> tank.pricePerLiter;
		std::cout << "Enter traveled KM : ";
		std::cin >> tank.traveled;
	}

	void Print(Auto p)
	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Make->" << p.GetMake() << std::endl;
		std::cout << "Model->" << p.GetModel() << std::endl;
		std::cout << "Fuel Type->" << p.GetFuel() << std::endl;
		std::cout << "Consumption " << p.GetConsumption() << " l / 100km" << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Fuel on Gas Station->" << p.tank.stationFuel << std::endl;
		std::cout << "Price per liter ->" << p.tank.pricePerLiter << std::endl;
		std::cout << "Traveled KM ->" << p.tank.traveled << std::endl;		
		std::cout << "Consumption of liters per all Kilometers ->" << p.GetConPerLiter() << std::endl;
		std::cout << "Needed money ->" << p.GetMoney() << std::endl;

	}
};



int main()
{
	std::vector<Auto> cars;
	int numberOfCars;

	std::cout << "Please, enter the number of cars: ";
	std::cin >> numberOfCars;
	Auto p;
	
	for (size_t i = 0; i < numberOfCars; i++)
	{
		p.Read();
		cars.push_back(p);
	}

	std::vector<Auto>::iterator it;
	for (it = cars.begin(); it != cars.end(); ++it)
	{
		p.Print(*it);
	}



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
