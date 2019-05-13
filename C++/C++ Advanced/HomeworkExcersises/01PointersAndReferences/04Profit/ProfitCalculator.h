#ifndef PROFIT_CALCULATOR_H

#include "Company.h"
#include <istream>

class ProfitCalculator {
public:
	int calculateProfit(const Company & company) const {
		int balance = company.getRevenue() - company.getCosts();
		int tax = (balance * taxPercentage) / 100;
		return balance * tax;
	}
private:
	int taxPercentage;

	friend std::istream& operator>>(std::istream& stream, ProfitCalculator & p);
};

std::istream& operator>>(std::istream& stream, ProfitCalculator & p) {
	return stream >> p.taxPercentage;
}
#define PROFIT_CALCULATOR_H
#endif // !PROFIT_CALCULATOR_H
