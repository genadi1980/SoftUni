#ifndef COMPANY_MEMORY_H

#include <vector>
#include <string>
#include <utility>
#include <sstream>

#include "Company.h"
#include "CompanyMemoryUtils.h"

typedef unsigned char byte;

typedef byte* bytePtr;

Company readCompany(const byte*& memory) {
	byte id;
	std::string name;
	std::vector<std::pair<char, char> > employees;

	int byteIndex = 0;

	id = memory[byteIndex];
	byteIndex++;

	std::ostringstream nameOut;
	while (memory[byteIndex] != '\0') {
		nameOut << memory[byteIndex]; byteIndex++;
	}
	name = nameOut.str();
	byteIndex++;

	byte numEmployees = memory[byteIndex];
	byteIndex++;
	for (int i = 0; i < numEmployees; i++) {
		char firstInitial = memory[byteIndex];
		byteIndex++;
		char secondInitial = memory[byteIndex];
		byteIndex++;

		employees.push_back(std::make_pair(firstInitial, secondInitial));
	}

	memory = (memory + byteIndex);

	return Company(id, name, employees);
}

std::vector<Company> readCompaniesFromMemory(const byte* memory, int numCompanies) {
	std::vector<Company> companies;

	for (int i = 0; i < numCompanies; i++) {
		companies.push_back(readCompany(memory));
	}

	return companies;
}
#define COMPANY_MEMORY_H

#endif // !COMPANY_MEMORY_H
