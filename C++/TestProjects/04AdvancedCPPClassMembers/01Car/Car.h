#ifndef CAR_H

#include <string>

using namespace std;

class Car {
	std::string brand;
	std::string model;
	int year;


public:
	Car(string brand, string model, int year)
		: brand(brand)
		, model(model)
		, year(year) {}

	std::string GetBrand() const {
		return this->brand;
	}

	std::string GetModel() const {
		return this->model;
	}

	int GetYear() const {
		return this->year;
	}
};
#define CAR_H
#endif // !CAR_H
