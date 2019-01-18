#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
    int n;
    
    do
    {
        cout << "Enter number n >= 3 :" << endl;
        cin >> n;
    }
    while ( n < 3 );
    
    int array[n];
    array[0] = 0;
    array[1] = 1;
    
    for( int i = 2; i < n; i++ )
    {
        array[i] = array[i-1] + array[i-2];
    }
    
    for ( int i = 0; i < n; i++ )
    {
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}

