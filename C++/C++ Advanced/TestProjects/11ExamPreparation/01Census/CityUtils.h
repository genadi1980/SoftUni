#ifndef  CITY_UTILS_H

#include "City.h"
#include <map>
#include <vector>

City * initCity(const std::string & name, const size_t population) {
	return new City(name, population);
}

std::map<size_t, const City *> groupByPopulation(std::vector<const City*> & cities
														, size_t & totalPopulation) 
{
	std::map<size_t, const City *> citiesByPopulation;
	totalPopulation = 0; 
	size_t currentPopulation = 0;
	const size_t SIZE = cities.size();
	for (size_t i = 0; i < SIZE; i++) {
		currentPopulation = cities[i]->getPopulation();
		totalPopulation += currentPopulation;
		citiesByPopulation[currentPopulation] = cities[i];
	}

	return citiesByPopulation;
}

#define CITY_UTILS_H
#endif // ! CITY_UTILS_H
