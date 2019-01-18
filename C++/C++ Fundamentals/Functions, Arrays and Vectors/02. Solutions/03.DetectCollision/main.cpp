#include <iostream>
using namespace std;

bool DetectCollision( int x1, int y1, int x2, int y2 )
{
    if( x1 >= x2 && y1 >= y2 )
    {
        cout << "The point1 is inside or after point2 \n";
        return true;
    }
    
    cout << "The point1 is NOT inside or after point2 \n";
    return false;
}

int main()
{
    bool exitCycle = false;
    
    while( !exitCycle )
    {
        int x1;
        int y1;
        int x2;
        int y2;
        
        cout << "Enter x1: " << endl;
        cin >> x1;
        
        cout << "Enter y1: " << endl;
        cin >> y1;
        
        cout << "Enter x2: " << endl;
        cin >> x2;
        
        cout << "Enter y2: " << endl;
        cin >> y2;
        
        exitCycle = DetectCollision(x1, y1, x2, y2);
        
    }
    return 0;
}

