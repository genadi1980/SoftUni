#ifndef PROFIT_REPORT_H

#include "Company.h"
#include "ProfitCalculator.h"

#include <string>
#include <sstream>
#include <vector>
#include <map>

std::string getProfitReport(const Company* fromInclusive, const Company* toInclusive, 
					std::map<int, ProfitCalculator> & profitCalculatorByCompany) {
		
	std::ostringstream out;
	for (const Company* c = fromInclusive; c <= toInclusive; ++c) {
		int id = c->getId();
		ProfitCalculator calculator = profitCalculatorByCompany.find(id)->second;
		out << c->getName() << " " << calculator.calculateProfit(*c);

		if (c != toInclusive) {
			out << std::endl;
		}
	}

	return out.str();
}
#define PROFIT_REPORT_H
#endif // !PROFIT_REPORT_H
