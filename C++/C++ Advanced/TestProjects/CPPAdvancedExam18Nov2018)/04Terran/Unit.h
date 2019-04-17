#ifndef UNIT_H


#include <string>
#include <sstream>

class Unit {
protected:
	std::string type;
public:
	Unit(std::string type) : type(type) {}

	virtual void update() = 0;

	virtual bool exists() const {
		return true;
	}

	virtual std::string getInfo() {
		std::ostringstream info;
		info << type;
		return info.str();
	}

	virtual ~Unit() {}
};

typedef Unit* UnitPtr;

#define UNIT_H
#endif // !UNIT_H