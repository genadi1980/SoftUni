#ifndef PROFIT_REPORT_H

#include <map>
#include <string>
#include <vector>
#include <sstream>

#include "Company.h"
#include "ProfitCalculator.h"

std::string getProfitReport(const Company* fromInclusive, const Company * toInclusive, const std::map<int, ProfitCalculator> & profitCalculatorsByCompany) {
	std::ostringstream out;
	for (const Company* c = fromInclusive; c <= toInclusive; ++c) {
		int id = c->getId();
		ProfitCalculator calculator = profitCalculatorsByCompany.find(id)->second;
		out << c->getName() << " = " << calculator.calculateProfit(*c);

		if (c != toInclusive) {
			out << std::endl;
		}
	}

	return out.str();
}
#define PROFIT_REPORT_H
#endif // !PROFIT_REPORT_H