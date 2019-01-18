#include <iostream>
#include <string>
const int MAX_SIZE = 100;
int main()
{
    int n = 0;
    std::cout <<"Enter size of array : ";
    std::cin >> n;
    
    char array[MAX_SIZE];
    for ( int i = 0; i < n; i++ )
    {
        std::cout << "array["<<i<<"] = ";
        std::cin >> array[i];
    }
    for ( int i = 0; i < n; i++ )
    {
        if ( array[i] >= '0' && array[i] <= '9' )
        {
            std::cout << array[i] << " ";
        }
    }
    std::cout << std::endl;
    for ( int i = 0; i < n; i++ )
    {
        if ( array[i] >= 'a' && array[i] <= 'z' )
        {
            std::cout << array[i] << " ";
        }
    }
    std::cout << std::endl;
    for ( int i = 0; i < n; i++ )
    {
        if ( ( array[i] < '0' || array[i] > '9' ) && (array[i] < 'a' || array[i] > 'z' ) )
        {
            std::cout << array[i] << " ";
        }
    }
    std::cout << std::endl;
    
    
    return 0;
}
