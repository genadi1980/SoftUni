#include "pch.h"
#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <sstream>
#include <map>


int main() {

	std::map<std::string, int> people;
	int n = 0;

	std::cin >> n;

	int age = 0;
	std::cin.ignore();
	for (int i = 0; i < n; i++)
	{
		std::string line;
		std::getline(std::cin, line);
		std::istringstream lineIn(line);

		std::string name;
		lineIn >> name;


		std::cin >> age;
		std::cin.ignore();

		people[name] = age;

	}
	std::string filter;
	std::cin >> filter;
	std::cin.ignore();

	std::string personToFind;
	int ageToFind = 0;

	std::map<std::string, int> ::iterator filterIn = people.find(filter);

	if ("name" == filter)
	{
		std::getline(std::cin, personToFind);
		for (filterIn = people.begin(); filterIn != people.end(); filterIn++)
		{
			if (personToFind == filterIn->first)
			{
				std::cout << "name : " << filterIn->first << " age : " << filterIn->second << std::endl;
			}
		}
	}
	else if ("age" == filter)
	{
		std::cin >> age;
		for (filterIn = people.begin(); filterIn != people.end(); filterIn++)
		{
			if (filterIn->second == age)
			{
				std::cout << "name : " << filterIn->first << " age : " << filterIn->second << std::endl;
			}
		}

	}




	return 0;
}