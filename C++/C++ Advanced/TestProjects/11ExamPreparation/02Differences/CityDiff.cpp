#include "pch.h"
#include "CityDiff.h"


CityDiff::CityDiff(const City & left, const City & right)
{
	const size_t FIRST_POPULATION = left.getPopulation();
	const size_t SECOND_POPULATION = right.getPopulation();

	if (FIRST_POPULATION < SECOND_POPULATION) {
		_populationSign = '-';

		_population = SECOND_POPULATION - FIRST_POPULATION;
		
	}
	else {
		_populationSign = '+';
		_population =  FIRST_POPULATION - SECOND_POPULATION;
		
	}
	
	if (left.getName() == right.getName()) {
		_townData = left.getName();
		_townData.append(" (");
		_townData.append(std::to_string(left.getCensusYear()));
		_townData.append(" vs. ");
		_townData.append(std::to_string(right.getCensusYear()));
		_townData.append(")");
	}
	else {
		_townData = left.getName();
		_townData.append(" (")
				 .append(std::to_string(left.getCensusYear()))
				 .append(") vs. ")
		         .append(right.getName())
		         .append(" (")
				 .append(std::to_string(right.getCensusYear()))
			     .append(")");
	}
	
}


std::ostream & operator<<(std::ostream & ostream, CityDiff & cityDiff) {
	
	ostream << cityDiff._townData
		<< '\n' << "population: "
		<< cityDiff._populationSign
		<< cityDiff._population
		<< '\n';
	return ostream;
}
