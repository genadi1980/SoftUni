//
//  main.cpp
//  02.ClassesAndObjects
//
//  Created by Iliya Iliev on 12.01.19.
//  Copyright © 2019 Iliya Iliev. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

class Country
{
private:
    
    std::string countryName = "";
    
    std::string countryCapital = "";
    
    double countryPopulation = 0;
    
public:
    
    Country()
    {
        countryName = "N/A";
        
        countryCapital = "N/A";
        
        countryPopulation = 0.0;
    }
    
    void SetName( std::string countryName )
    {
        this->countryName = countryName;
    }
    
    void SetCapital( std::string countryCapital )
    {
        this->countryCapital = countryCapital;
    }
    
    void SetPopulation( double countryPopulation )
    {
        this->countryPopulation = countryPopulation;
    }
    
    std::string GetName()
    {
        return this->countryName;
    }
    
    std::string GetCapital()
    {
        return this->countryCapital;
    }
    
    double GetPopulation()
    {
        return this->countryPopulation;
    }
    
    void PrintInfo()
    {
        std::cout << "Country -> " << countryName << std::endl;
        std::cout << "Capital -> " << countryCapital << std::endl;
        std::cout << "Population (millions) -> " << countryPopulation << std::endl;
    }
};

void FilterByPopulation( double filterPopulation, std::vector<Country>vecFilter )
{
    std::cout << "The countries with Population " << filterPopulation << " millions are: " << std::endl;
    
    for( Country countries : vecFilter )
    {
        if( countries.GetPopulation() == filterPopulation )
        {
            countries.PrintInfo();
        
        }
    }
}

int main()
{

    int n = 0;
    
    std::vector<Country>vecOfCountries;
    
    double filterPopulation = 0;
    
    std::cout << "How many countries you want to input ? " << std::endl;
    
    std::cin >> n;
    
    for( unsigned int i = 0; i < n; i++ )
    {
        std::string name = "";
        std::string capital = "";
        double population = 0;
        
        std::cout << "Enter Country -> " << std::endl;
        std::cin >> name;
        std::cout << "Enter Capital -> " << std::endl;
        std::cin >> capital;
        std::cout << "Enter Population -> " << std::endl;
        std::cin >> population;
     
        Country countryToPush;
        
        
        countryToPush.SetName(name);
        countryToPush.SetCapital(capital);
        countryToPush.SetPopulation(population);
        
        vecOfCountries.push_back(countryToPush);
    }
    
    std::cout << "Which is the populations (millions) that you want to filter ? " << std::endl;
    
    std::cin >> filterPopulation;
    
    FilterByPopulation( filterPopulation, vecOfCountries);
    
    return 0;
}
