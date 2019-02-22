#ifndef COMPANY_H

#include <istream>
#include <ostream>
#include <string>
#include <vector>
#include <utility>
#include <exception>

typedef unsigned char byte;

class Company
{
private:
	int id;
	std::string name;
	std::vector<std::pair<char, char> > employees;

public:
	Company() {}

	Company(int id, std::string name, std::vector<std::pair<char, char>> employees)
		: id(id)
		, name(name)
		, employees(employees) {}
	int getId() const {
		return this->id;
	}

	std::string getName() const {
		return this->name;
	}

	std::vector <std::pair<char, char>> getEmployees() const {
		return this->employees;
	}

	friend std::ostream& operator<<(std::ostream& stream, const Company& c);
	friend std::istream& operator>>(std::istream& stream, Company& c);

};

std::ostream& operator<<(std::ostream& stream, const Company& c) {
	stream << c.id << " " << c.name << " (";

	for (int i = 0; i < c.employees.size(); i++) {
		std::pair<char, char> initials = c.employees[i];
		stream << initials.first << "." << initials.second << ".";
		if (i < c.employees.size() - 1) {
			stream << ",";
		}
	}

	stream << ")";

	return stream;
}

std::istream& operator>>(std::istream& stream, Company& c) {
	stream >> c.id;
	if (!stream) {
		return stream;
	}

	stream >> c.name;

	std::vector<std::pair<char, char> > employees;
	char current;
	stream >> current; // read the '('

	while (current != ')') {
		char firstInitial, secondInitial;
		stream >> current;
		if (current == ')') {
			if (!employees.empty()) { // sanity check
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

		employees.push_back(std::pair<char, char > { firstInitial, secondInitial });

	}

	c.employees = employees;

	return stream;	
}

#define COMPANY_H
#endif // !COMPANY_H