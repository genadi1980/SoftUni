//
//  main.cpp
//  01.Exam
//
//  Created by Iliya Iliev on 13.01.19.
//  Copyright © 2019 Iliya Iliev. All rights reserved.
//

#include <iostream>

int main()
{
    unsigned int sizeOfArrays = 0;
    
    std::cout << "Enter SIZE of Arrays: " << std::endl;
    
    std::cin >> sizeOfArrays;
    
    int array[sizeOfArrays];
    
    int filteredArray[sizeOfArrays];
    
    int indexFilteredArray = 0;
    
    int maxInArray = -1;
    
    std::cout << "Enter elements in array: " << std::endl;
    
    for( unsigned int i = 0; i < sizeOfArrays; i++ )
    {
        std::cin >> array[i];
    }
    
    while( indexFilteredArray < sizeOfArrays )
    {
        for( unsigned int i = 0; i < sizeOfArrays; i++ )
        {
            if( maxInArray < array[i] )
            {
                maxInArray = array[i];
            }
        }
        
        for( unsigned int j = 0; j < sizeOfArrays; j++ )
        {
            if( array[j] == maxInArray )
            {
                array[j] = -1;
            }
        }
        
        filteredArray[indexFilteredArray] = maxInArray;
        
        indexFilteredArray++;
        
        maxInArray = -1;
        
    }
    
    std::cout << "Array with Descending order: " << std::endl;
    
    for( unsigned int i = 0; i < sizeOfArrays; i++ )
    {
        std::cout << filteredArray[i] << " ";
    }
    
    std::cout << std::endl;
    
    return 0;
}
