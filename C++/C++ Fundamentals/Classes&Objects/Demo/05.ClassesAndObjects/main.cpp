//
//  main.cpp
//  05.ClassesAndObjects
//
//  Created by Iliya Iliev on 12.01.19.
//  Copyright © 2019 Iliya Iliev. All rights reserved.
//
#include <iostream>
using namespace std;

class RationalNumber
{
private:
    
    int num, den;
public:
    RationalNumber()
    : num(0)
    , den(1)
    {}
    void SetNum( int other )
    {
        this->num = other;
    }
    
    int GetNum()
    {
        return num;
    }
    
    void SetDen( int other )
    {
        if( other == 0 )
        {
            std::cout << "The denominator can't be 0, the denominator will be set to 1" << endl;
            
            other = 1;
        }
        
        this->den = other;
    }
    
    int GetDen()
    {
        return den;
    }
    
    void Print()
    {
        cout << num << "/" << den <<endl;
    }
    
};

RationalNumber GetSum( RationalNumber r1, RationalNumber r2 )
{
    RationalNumber result;
    result.SetNum( r1.GetNum() * r2.GetDen() + r2.GetNum() * r1.GetDen() );
    result.SetDen( r1.GetDen() * r2.GetDen() );
    
    return result;
}

RationalNumber GetDifference( RationalNumber r1, RationalNumber r2 )
{
    RationalNumber result;
    result.SetNum( r1.GetNum() * r2.GetDen() - r2.GetNum() * r1.GetDen() );
    result.SetDen( r1.GetDen() * r2.GetDen() );
    
    return result;
}

RationalNumber GetMultiplication ( RationalNumber r1, RationalNumber r2 )
{
    RationalNumber result;
    result.SetNum( r1.GetNum() * r2.GetNum() );
    result.SetDen( r1.GetDen() * r2.GetDen() );
    
    return result;
}

RationalNumber GetDivision( RationalNumber r1, RationalNumber r2 )
{
    RationalNumber result;
    result.SetNum( r1.GetNum() * r2.GetDen() );
    result.SetDen( r1.GetDen() * r2.GetNum() );
    
    return result;
}

int main()
{
    RationalNumber ratNumber1;
    RationalNumber ratNumber2;
    RationalNumber result;
    
    int num = 0, den = 1;
    
    cout << "Enter first rational number numerator : ";
    cin >> num;
    cout << "Enter first rational number denominator : ";
    cin >> den;
    ratNumber1.SetNum(num);
    ratNumber1.SetDen(den);
    
    cout << "Enter second rational number numerator : ";
    cin >> num;
    cout << "Enter second rational number denominator : ";
    cin >> den;
    ratNumber2.SetNum(num);
    ratNumber2.SetDen(den);
    
    result = GetSum(ratNumber1, ratNumber2);
    cout << "Sum  : ";
    result.Print();
    cout << endl;
    
    result = GetDifference(ratNumber1, ratNumber2);
    cout << "Difference : ";
    result.Print();
    cout << endl;
    
    result = GetMultiplication(ratNumber1, ratNumber2);
    cout << "Мultiplication : ";
    result.Print();
    cout << endl;
    
    result = GetDivision(ratNumber1, ratNumber2);
    cout << "Division : ";
    result.Print();
    
    
    
    
    return 0;
}


