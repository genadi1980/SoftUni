#ifndef COMAPNY_H

#include <string>
#include <vector>
#include <ostream>
#include <sstream>
#include <utility>
#include <istream>

#include "HasId.h"
#include "HasInfo.h"

typedef unsigned char byte;



class Company : public HasId, public HasInfo {
private:
	int id;
	std::string name;
	std::vector<std::pair<char, char>> employees;
public:

	Company();
	Company(int id, std::string name, std::vector<std::pair<char, char> > employee);

	int getId() const;

	std::string getName() const;

	std::vector<std::pair<char, char> > getEmployees() const;

	friend std::ostream& operator<<(std::ostream& stream, const Company& c);
	friend std::istream& operator>>(std::istream& stream, Company& c);

	std::string getInfo() const;

};
#define COMAPNY_H
#endif //!COMAPNY_H