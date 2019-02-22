#ifndef MAKE__COMPANY_H
#define MAKE__COMPANY_H

#include <string>
#include <vector>
#include <sstream>
#include <utility>

#include "Company.h"

std::vector<std::pair<char, char> > employees;
Company* company = new Company(0, "", employees);

Company* makeCompany(std::vector<std::string> & properties) {
	int id = std::stoi(properties[0]);
	std::string name = properties[1];
	employees.clear();
	delete company;
	for (size_t i = 2; i < properties.size(); i++)
	{
		std::pair<char, char> employee;
		employee.first = properties[i][0];
		employee.second = properties[i][1];

		employees.push_back(employee);
	}

	company = new Company(id, name, employees);

	return company;
}

#endif // !MAKE__COMPANY_H

