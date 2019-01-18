#include <string>
#include <vector>
#include <iostream>


//clas Date and Patient
// Date - day, month, year
// Patient - name , date - birthday, number of visits
// function - sum of visits
class Date
{
    int day, month, year;
public:
    Date( int OtherDay = 1, int  OtherMonth = 1, int OtherYear = 1900 )
    : day(OtherDay)
    , month(OtherMonth)
    , year(OtherYear)
    {}
    
    int GetDay()
    {
        return day;
    }
    int GetMonth()
    {
        return month;
    }
    int GetYear()
    {
        return year;
    }
    
    void Print()
    {
        std::cout << " " << day << "/" << month << "/" << year << std::endl;
    }
    
};

class Patient
{
    std::string name;
    int visits;
    Date dateOfBirthday;
public:
    Patient(std::string name, int visits, Date dateOfBirthday  )
    {
        this->name = name;
        this->visits = visits;
        this->dateOfBirthday = dateOfBirthday;
    }
    
    void SetVisits( int visits)
    {
        this->visits = visits;
    }
    std::string GetName()
    {
        return this->name;
    }
    
    Date GetDateOfBirthday()
    {
        return this->dateOfBirthday;
    }
    
    int GetVisits()
    {
        return this->visits;
    }
    
    void Print()
    {
        std::cout << "Name : " << name <<std::endl;
        std::cout << "Visits : " << visits << std::endl;
        std::cout << "Birthday :";
        dateOfBirthday.Print();
        std::cout << std::endl;
    }
    
};

int SumOfVisits( std::vector<Patient> p, int size )
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += p[i].GetVisits();
    }
    return sum;
}

int main()
{
    std::vector<Patient> patients;
    
    int size;
    
    std::cout << "Enter number of patients : ";
    std::cin >> size;
    
    for ( int i = 0; i < size; ++i )
    {
        std::string name;
        int d, m, y;
        int visits;
        
        std::cout << "Enter name : ";
        std::cin >> name;
        
        std::cout << "Enter date of birthday (dd/mm/year) : " << std::endl;;
        std::cout << "Enter date: ";
        std::cin >> d;
        std::cout << "Enter month: ";
        std::cin >> m;
        std::cout << "Enter year: ";
        std::cin >> y;
        Date tempDate(d,m,y);
        
        std::cout << "Enter number of visits: ";
        std::cin >> visits;
        
        Patient temp(name, visits, tempDate);
        
        patients.push_back( temp );
    }
    
    for (int i = 0; i < size; ++ i )
    {
        patients[i].Print();
    }
    
    std::cout << "Sum of visits: : " << SumOfVisits(patients, size) << std::endl;
    
    
    return 0;
}

