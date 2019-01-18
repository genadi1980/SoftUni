#include <iostream>
#include <string>
#include <vector>
using namespace std;

void SortArray( int array[], const int arraySize )
{
    int counter = 0;
    
    int sortedArray[arraySize];
    
    while( counter < arraySize )
    {
        int min = INT_MAX;
        
        int memoryMin = 0;
        
        for( int i = 0; i < arraySize; i++ )
        {
            if( array[i] < min )
            {
                min = array[i];
                
                memoryMin = i;
            }
        }
        
        array[memoryMin] = INT_MAX;
        
        sortedArray[counter] = min;
        
        counter++;
        
    }
    
    cout << "Array with ascending numbers" << endl;
    
    for( int i = 0; i < arraySize; i ++ )
    {
        array[i] = sortedArray[i];
        
        cout << sortedArray[i] << " ";
    }
    
    cout << endl;
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
    
    SortArray(myArray, n);
    
    return 0;
}

