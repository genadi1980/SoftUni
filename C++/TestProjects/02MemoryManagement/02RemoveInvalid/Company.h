#ifndef COMAPNY_H

#include <string>
#include <sstream>
#include <vector>
#include <utility>


class Company {
public:
	Company (int id, std::string name)
		: id(id)
		, name(name) {}

	int getId() const {
		return this->id;
	}

	std::string toString() const {
		std::ostringstream stream;
		stream << id << " " << name << " ";
		return stream.str();
	}

private:
	int id;
	std::string name;
};

#define COMAPNY_H
#endif // !COMAPNY_H
