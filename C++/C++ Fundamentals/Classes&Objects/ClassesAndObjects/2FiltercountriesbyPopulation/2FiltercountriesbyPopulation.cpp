// 2FiltercountriesbyPopulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

class Country {
private:
	std::string country;
	std::string capital;
	double population;


public:
	Country(std::string country, std::string capital,  double population)
	{
		this->country = country;
		this->capital = capital;
		this->population = population;
	}

	Country()
	{

	}

	void SetCountry(std::string name)
	{
		this->country = name;		
	}

	void SetCapital(std::string capital)
	{
		this->capital = capital;
	}

	void SetPop(double population)
	{
		this->population = population;
	}


	std::string GetName()
	{
		return country;
	}

	std::string GetCapital()
	{
		return capital;
	}

	double GetPop()
	{
		return population;
	}

	void PrintAllInfo() 
	{
		std::cout << "Country -> " << GetName() << std::endl;
		std::cout << "Capital -> " << GetCapital() << std::endl;
		std::cout << "Ppulation (millilons) -> " << GetPop() << std::endl;
	}

	
};

void FilterCountry(std::vector<Country> & listOfCountries, double population)
{
	std::vector<Country>::iterator it;

	for (it = listOfCountries.begin(); it != listOfCountries.end(); it++) {
		if (population == it->GetPop())
		{
			it->PrintAllInfo();
		}
	}

}

int main()
{
	std::vector<Country> listOfCountries;
	int numberOfCountries = 0;
	double population = 0;
	
	std::cout << "How many countries you want to input ? " << std::endl;
	std::cin >> numberOfCountries;

	for (int i = 0; i < numberOfCountries; i++)

	{
		Country country;
		std::string name = ""; 
		std::string capital;
		double population = 0;

		std::cout << "Enter Country -> " << std::endl;
		std::cin >> name;
		country.SetCountry(name);
		std::cin.ignore();

		std::cout << "Enter Capital -> " << std::endl;
		std::cin >> capital;
		country.SetCapital(capital);
		std::cin.ignore();

		std::cout << "Enter Population -> " << std::endl;
		std::cin >> population;
		country.SetPop(population);

		
		listOfCountries.push_back(country);
	}

	std::cout << "Which is the populations (millions) that you want to filter ? " << std::endl;
	std::cin >> population;

	FilterCountry(listOfCountries, population);
	
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
