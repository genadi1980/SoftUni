#include <iostream>
#include <string>
using namespace std;

void IntCalculator( int num1, string sign, int num2 )
{
    if( sign == "+")
    {
        cout << "The sum is -> " << num1 + num2 << endl;
    }
    else if( sign == "-")
    {
        cout << "The difference is -> " << num1 - num2 << endl;
    }
    else if( sign == "*")
    {
        cout << "The product is -> " << num1 * num2 << endl;
    }
    else if( sign == "/")
    {
        cout << "The division is -> " << num1 / num2 << endl;
    }
    else
    {
        cout << "INVALID SIGN !" << endl;
    }
}

int main()
{
    int num1;
    int num2;
    string sign;
    
    cout << "Enter num1 : " << endl;
    cin >> num1;
    
    cout << "Enter sign : " << endl;
    cin >> sign;
    
    cout << "Enter num2 : " << endl;
    cin >> num2;
    
    IntCalculator(num1, sign, num2);
    return 0;
}

