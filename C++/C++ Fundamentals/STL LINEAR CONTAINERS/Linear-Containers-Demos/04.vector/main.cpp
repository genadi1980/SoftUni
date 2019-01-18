#include <iostream>
#include <vector>
#include <list>
#include <sstream>

int main()
{
    //Reads numbers until "end" is entered, then shows the
	//maximum difference between any two elements

	std::cout << "Enter whitespace separated numbers and 'end' for finish: ";

    std::vector<int> numbers;

    std::string itemString;
    std::cin >> itemString;
    while (itemString != "end")
    {
        std::stringstream itemParser(itemString);
        int itemValue;
        itemParser >> itemValue;

        numbers.push_back(itemValue);

        std::cin >> itemString;
    }

    int maxDifference = 0;
    for (unsigned long a = 0; a < numbers.size(); a++)
    {
        for (unsigned long b = 0; b < numbers.size(); b++)
        {
            const int currentDiff = numbers[a] - numbers[b];
            if (currentDiff > maxDifference)
            {
                maxDifference = currentDiff;
            }
        }
    }

	//Question: do we really want to invoke number.size() multiple times?

    std::cout << "max difference: " << maxDifference << std::endl;

    return 0;
}
