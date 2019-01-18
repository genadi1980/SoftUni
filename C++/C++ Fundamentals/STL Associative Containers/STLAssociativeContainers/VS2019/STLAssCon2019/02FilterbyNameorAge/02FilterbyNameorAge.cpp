// 02FilterbyNameorAge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<std::string, int> person;

	int age = 0;
	int numberOfPeople = 0;
	std::cin >> numberOfPeople;
	std::cin.ignore();
	for (int i = 0; i < numberOfPeople; i++)
	{

		std::string name;
		getline(std::cin, name);


		
		std::cin >> age;
		std::cin.ignore();

		
		person[name] = age; 
		
	}

	

	std::string filter = "";
	std::cin >> filter;
	std::cin.ignore();

	std::string personName = "";
	std::string personAge = "";

	std::map<std::string, int>::iterator it;
		
	
		if ( "name" == filter )
		{
			getline(std::cin, personName);		 
			
				it = person.find(personName);

				for (it = person.begin(); it != person.end(); it++)
				{
					if (personName == it->first)
					{
						std::cout << "name : " << it->first << " age : " << it->second << std::endl;
					}				 
				}
		}

		else if ("age" == filter)
		{
			getline(std::cin, personAge);
			age = std::stoi(personAge);
			
			for (it = person.begin(); it != person.end(); it++)
			{
				if (it->second == age)				{

					std::cout << "name : " << it->first << " age : " << it->second << std::endl;
					
				}
			}
			
		}	
			
		

		return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
