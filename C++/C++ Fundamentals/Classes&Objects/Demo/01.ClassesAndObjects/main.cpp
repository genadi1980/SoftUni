//
//  main.cpp
//  01.ClassesAndObjects
//
//  Created by Iliya Iliev on 12.01.19.
//  Copyright © 2019 Iliya Iliev. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

class Student
{
private:
    
    std::string name = "";
    
    std::string surname = "";
    
    unsigned short age = 0;
    
    double vote = 0;
    
public:
    
    Student( std::string name, std::string surname, unsigned short age, double vote )
    {
        //Constructor with params
        
        this->name = name;
        
        this->surname = surname;
        
        this->age = age;
        
        this->vote = vote;
    }
    
    Student()
    {
        this->name = "N/A";
        // Constructor without params
    }
    
    double GetVote()
    {
        return this->vote;
    }
    
    void InfoStudent()
    {
        std::cout << "Name -> " << name << " " << surname << std::endl;
        
        std::cout << "Age -> " << age << std::endl;
        
        std::cout << "Vote -> " << vote << std::endl;
    }
    
};

void SearchByMinVotes( std::vector<Student>vecOfStudents, double vote )
{
    bool isThereMinVotes = false;
    
    for( Student student : vecOfStudents )
    {
        if( student.GetVote() >= vote )
        {
            isThereMinVotes = true;
        }
    }
    
    if( isThereMinVotes )
    {
        std::cout << "The students with MIN vote -> " << vote << " are: " << std::endl;
        
        for( unsigned int i = 0; i < vecOfStudents.size(); i++ )
        {
            if( vecOfStudents.at(i).GetVote() >= vote )
            {
                vecOfStudents.at(i).InfoStudent();
            }
        }
    }
    else
    {
        std::cout << "There are no student with MIN vote -> " << vote << std::endl;
    }
    
    
}

int main()
{

    std::vector<Student>vecOfStudents;
    
    int n = 0;
    
    double minVote = 0;
    
    std::cout << "How many students you want to input ? " << std::endl;
    
    std::cin >> n;
    
    for( unsigned int i = 0; i < n; i++ )
    {
        std::string name = "";
        std::string surname = "";
        unsigned short age = 0;
        double vote = 0;
        
        std::cout << "Enter name: " << std::endl;
        std::cin >> name;
        std::cout << "Enter surname: " << std::endl;
        std::cin >> surname;
        std::cout << "Enter age: " << std::endl;
        std::cin >> age;
        std::cout << "Enter vote (the vote can be with decimal point): " << std::endl;
        std::cin >> vote;
        
        Student studentToPush( name, surname, age, vote );
        
        vecOfStudents.push_back( studentToPush );
        
    }
    
    std::cout << "Which is the minimal vote that you would like to filter ? " << std::endl;
    
    std::cin >> minVote;
    
    SearchByMinVotes( vecOfStudents, minVote );
    
    return 0;
}
























































