#include <iostream>
#include <string>
#include <vector>
using namespace std;

void FindMaxInArray( int array[], const int arraySize )
{
    int max = INT_MIN;
    
    for( int i = 0; i < arraySize; i++ )
    {
        if( array[i] > max )
        {
            max = array[i];
        }
    }
    
    cout << "The biggest number in array is : " << max << endl;
}

int main()
{
    int n;
    
    cout << "Enter array size: " << endl;
    
    cin >> n;
    
    int myArray[n];
    
    for( int i = 0; i < n; i++ )
    {
        cout << "Enter number: " << endl;
        
        cin >> myArray[i];
    }
    
    FindMaxInArray(myArray, n);
    
    
    
    return 0;
}

