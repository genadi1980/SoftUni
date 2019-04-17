#ifndef COMPANY_H

#include <string>
#include <istream>
#include <ostream>
#include <vector>
#include <utility>
#include <exception>

typedef unsigned char byte;

class Company {
private:
	std::string name;
	std::vector<std::pair<char, char> > employees;

public:
	Company() {}

	Company(std::string name, std::vector<std::pair<char, char> > employees)
		:name(name)
		, employees(employees) {}

	std::string getName() const {
		return this->name;
	}

	std::vector<std::pair<char, char> > getEmployees() const {
		return this->employees;
	}

	friend std::ostream& operator<<(std::ostream& stream, const Company& c);
	friend std::istream& operator>>(std::istream& stream, Company& c);

};
std::ostream& operator<<(std::ostream& stream, const Company& c) {
	stream << c.name << " (";

	for (int i = 0; i < c.employees.size(); i++) {
		auto initials = c.employees[i];
		stream << initials.first << "." << initials.second << ".";
		if (i < c.employees.size() - 1) {
			stream << ";";
		}
	}

	stream << ")";

	return stream;
}

std::istream& operator>>(std::istream& stream, Company& c) {
	if (!stream) {
		return stream;
	}

	stream >> c.name;

	std::vector<std::pair<char, char> > employees;
	char current;
	stream >> current;

	while (current != ')') {
		char firstInitial, secondInitial;
		stream >> current;
		if (current == ')') {
			if (!employees.empty()) {
				throw std::exception();
			}
			break;
		}

		firstInitial = current;

		stream >> current;
		if (current != '.') {
			throw std::exception();
		}

		stream >> current;
		secondInitial = current;

		stream >> current;
		if (current != '.') {
			throw std::exception();
		}

		stream >> current;
		if (current != ',' && current != ')') {
			throw std::exception();
		}

		employees.push_back(std::pair<char, char> { firstInitial, secondInitial});
	}

	c.employees = employees;

	return stream;
	
}
#define COMPANY_H
#endif // !COMPANY_H