#include <iostream>
#include <string>
#include <vector>
using namespace std;

void FilterNumber( vector<int>myVec, int numberToFilter )
{
    bool exitCycle = false;
    
    while( !exitCycle )
    {
        for( int i = 0; i < myVec.size(); i++ )
        {
            if( myVec.at(i) == numberToFilter )
            {
                myVec.erase( myVec.begin() + i );
            }
        }
        
        exitCycle = true;
        
        for( int j = 0; j < myVec.size(); j++ )
        {
            if( myVec.at(j) == numberToFilter )
            {
                exitCycle = false;
            }
        }
    }
    
    cout << "Filtered Numbers in vector: " << endl;
    for( int i = 0; i < myVec.size(); i++ )
    {
        cout << myVec.at( i ) << " ";
    }
    cout << endl;
}


int main()
{
    vector<int>myVector;
    
    int n;
    
    cout << "Enter vector size : " << endl;
    
    cin >> n;
    
    for( int i = 0; i < n; i++ )
    {
        int num;
        
        cout << "Enter Number: " << endl;
        
        cin >> num;
        
        myVector.push_back( num );
    }
    
    int numberToFilter;
    
    cout << "Enter number to filter :" << endl;
    
    cin >> numberToFilter;
    
    FilterNumber(myVector, numberToFilter);
    
    return 0;
}

