#ifndef COMPANY_H

#include <string>

class Company {
public:
	int getId() const {
		return this->_id;
	}

	std::string getName() const {
		return this->_name;
	}

private:
	std::string _name;
	int _id;

	friend std::ostream& operator<<(std::ostream& stream, const Company & company);
	friend std::istream& operator>>(std::istream& stream, Company & company);
};

std::ostream& operator<<(std::ostream& stream, const Company & company) {
	return stream << company._name<< " " << company._id;
}

std::istream& operator>>(std::istream& stream, Company & company) {
	return stream >> company._name >> company._id;
}
#define COMPANY_H
#endif // !COMPANY_H