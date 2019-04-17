#ifndef CITY_DIFF_H
#define CITY_DIFF_H

#include <iostream>
#include <string>

#include "City.h"

class CityDiff
{
public:
	CityDiff(const City & left, const City & right);
	virtual ~CityDiff() = default;

	friend std::ostream & operator<<(std::ostream & ostream, CityDiff & cityDiff);

private:
	size_t _population;
	char _populationSign;
	std::string _townData;
	unsigned int censusYear;
};

#endif // !CITY_DIFF_H