//
//  main.cpp
//  05.Exam
//
//  Created by Iliya Iliev on 16.01.19.
//  Copyright © 2019 Iliya Iliev. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

class Auto
{
private:
    
    std::string make = "";
    
    std::string model = "";
    
    std::string fuel = "";
    
    double consumption = 0.0;
    
public:
    
    Auto( std::string make, std::string model, std::string fuel, double consumption )
    {
        SetMake(make);
        SetModel(model);
        SetFuel(fuel);
        SetConsumption(consumption);
    }
    
    void SetMake( std::string make )
    {
        this->make = make;
    }
    
    void SetModel( std::string model )
    {
        this->model = model;
    }
    
    void SetFuel( std::string fuel )
    {
        if( fuel != "diesel" && fuel != "gasoline" && fuel != "gpl" )
        {
            std::cout << "The fuel can be only : " << std::endl;
            std::cout << "diesel, gasoline or gpl" << std::endl;
            std::cout << "the default tank will be set to diesel" << std::endl;
            
            this->fuel = "diesel";
        }
        else
        {
            this->fuel = fuel;
        }
    }
    
    void SetConsumption( double consumption )
    {
        if( consumption <= 0 )
        {
            std::cout << "The consumption could NOT be NEGATIVE or ZERO !" << std::endl;
            std::cout << "The consumption will be set to 5 l/100km" << std::endl;
            this->consumption = 5;
        }
        else
        {
            this->consumption = consumption;
        }
    }
    
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
        return this->fuel;
    }
    
    double GetConsumption()
    {
        return this->consumption;
    }
    
    void PrintInfo()
    {
        std::cout << "Make -> " << make << std::endl;
        std::cout << "Model -> " << model << std::endl;
        std::cout << "Fuel Type -> " << fuel << std::endl;
        std::cout << "Consumption " << consumption << " l/100km" << std::endl;
    }
    
    
};

struct Tank
{
    std::string fuel = "";
    
    double pricePerLiter = 0.0;
    
    void PrintInfo()
    {
        std::cout << "Fuel on Gas Station -> " << fuel << std::endl;
        std::cout << "Price per liter -> " << pricePerLiter << std::endl;
    }
};

void Calculate( Auto autoObject, Tank tankObject, int traveledKm )
{
    autoObject.PrintInfo();
    
    std::cout << std::endl;
    
    tankObject.PrintInfo();
    
    std::cout << "Traveled KM -> " << traveledKm << std::endl;
    
    double consumtionPerAllKm = ( autoObject.GetConsumption() / 100 ) * traveledKm;
    
    std::cout << "Consumption of liters per all Kilometers -> " << consumtionPerAllKm << std::endl;
    
    std::cout << "Needed money -> " << consumtionPerAllKm * tankObject.pricePerLiter << " BGN" << std::endl;
    
}

int main()
{
    int n = 0;
    
    int traveledKm = 0;
    
    std::vector<Auto>vecCars;
    
    std::vector<Tank>vecTank;
    
    std::cout << "How many cars you want to check ? " << std::endl;
    
    std::cin >> n;
    
    for( unsigned int i = 0; i < n; i++ )
    {
        std::string make = "";
        std::string model = "";
        std::string fuelType = "";
        double consumption = 0.0;
        std::string fuel = "";
        double pricePerLiter = 0.0;
        
        std::cout << "Enter Make : ";
        std::cin >> make;
        std::cout << "Enter Model : ";
        std::cin >> model;
        std::cout << "Enter FuelType : ";
        std::cin >> fuelType;
        std::cout << "Enter Consumption ( l/100km ) : ";
        std::cin >> consumption;
        std::cout << "Enter Fuel on Gas Station : ";
        std::cin >> fuel;
        std::cout << "Enter Price per Liter : ";
        std::cin >> pricePerLiter;
        
        Auto carObj( make, model, fuelType, consumption );
        Tank tankObject;
        
        tankObject.fuel = fuel;
        tankObject.pricePerLiter = pricePerLiter;
        
        vecCars.push_back( carObj );
        vecTank.push_back( tankObject );
    }
    
    std::cout << "Enter traveled KM : ";
    
    std::cin >> traveledKm;
    
    std::cout << std::endl;
    
    for( unsigned int i = 0; i < n; i++ )
    {
        Calculate( vecCars.at(i), vecTank.at(i), traveledKm );
    }
    
    return 0;
}

