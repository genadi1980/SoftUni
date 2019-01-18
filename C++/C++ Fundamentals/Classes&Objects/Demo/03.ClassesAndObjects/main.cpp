//
//  main.cpp
//  03.ClassesAndObjects
//
//  Created by Iliya Iliev on 12.01.19.
//  Copyright © 2019 Iliya Iliev. All rights reserved.
//

#include <string>
#include <iostream>

class Emploee
{
    struct
    {
        std::string firstName = "";
        std::string lastName = "";
    } name;
    
    struct
    {
        double hours = 0.0;
        double salary = 0.0;
    } work;
    
public:
    
    void Read();
    void Print();
    
};
void Emploee::Read()
{
    std::cout << "Enter name : ";
    std::cin >> name.firstName;
    std::cout << "Enter surname : ";
    std::cin >> name.lastName;
    std::cout << "Enter salary per Hour: ";
    std::cin >> work.salary;
    std::cout << "Enter hours : ";
    std::cin >> work.hours;
}

void Emploee::Print()
{
    std::cout << name.firstName << " " << name.lastName << " " << std::endl;
    std::cout << "Worked Hours: " << work.hours << " " << std::endl;
    std::cout << "Total Salary (hours*salaryPerHour) : " << work.hours * work.salary << std::endl;
}

int main()
{
    
    Emploee empl;
    empl.Read();
    empl.Print();
    
    return 0;
}


