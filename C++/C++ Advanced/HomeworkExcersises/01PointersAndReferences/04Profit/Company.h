#ifndef COMPANY_H


#include <string>

class Company {
public:
	std::string getName() const {
		return this->_name;
	}

	int getId() const {
		return this->_id;
	}

	int getRevenue() const {
		return this->_revenue;
	}

	int getCosts() const {
		return this->_costs;
	}

private:
	std::string _name;
	int _id;
	int _revenue;
	int _costs;

	friend std::istream& operator>>(std::istream& stream, Company & company);
};

std::istream& operator>>(std::istream& stream, Company & company) {
	char separator;
	return stream >> company._name >> company._id >> separator >> company._revenue >> company._costs;
}

std::ostream& operator<<(std::ostream& stream, Company & company) {
	return stream << company.getName() << " " << company.getId() << " " << company.getRevenue() << company.getCosts();
}


#define COMPANY_H
#endif // !COMPANY_H
