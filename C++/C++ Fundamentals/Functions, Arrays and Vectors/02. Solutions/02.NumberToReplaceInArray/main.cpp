#include <iostream>
#include <string>
#include <vector>
using namespace std;

void ReplaceNumber( int array[], const int arraySize, int numToReplace )
{
    for( int i = 0; i < arraySize; i++ )
    {
        if( array[i] == numToReplace )
        {
            array[i] = 0;
        }
    }
    
    cout << "Replaced number in array: " << endl;
    
    for( int j = 0; j < arraySize; j++ )
    {
        cout << array[j] << " ";
    }
    
    cout << endl;
}

int main()
{
    int n;
    
    int numToReplace;
    
    cout << "Enter array size: " << endl;
    
    cin >> n;
    
    int myArray[n];
    
    for( int i = 0; i < n; i++ )
    {
        cout << "Enter number: " << endl;
        
        cin >> myArray[i];
    }
    
    cout << "Enter number to replace: " << endl;
    
    cin >> numToReplace;
    
    ReplaceNumber(myArray, n, numToReplace );
    
    return 0;
}

