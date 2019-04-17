#include "pch.h"
#include "Laptop.h"

#include <iostream>



Laptop::Laptop(const std::string & name,
	const double        price,
	const double        monitorSize) : Hardware(name, price) {

	printInfo();
	std::cout << " is being created" << '\n';
}

Laptop::Laptop(const Laptop & other) {
	if (other. == nullptr) {
		valuesArray = nullptr;
	}
	else {
		const size_t SIZE = other.size();
		valuesArray = new Value[SIZE];

		for (size_t i = 0; i < SIZE; i++) {
			valuesArray[i] = other.valuesArray[i];
		}
	}

	std::cout << "Copy construction for ";
	printInfo();
}
Laptop::~Laptop() {

}
Laptop & Laptop::operator=(const Laptop & other) {
	if (this != &other) {

		/*clearIndex();

		valuesSet = other.valuesSet;
		if (other.valuesArray == nullptr) {
			valuesArray = nullptr;
		}
		else {
			const size_t SIZE = other.size();
			valuesArray = new Value[SIZE];

			for (size_t i = 0; i < SIZE; i++) {
				valuesArray[i] = other.valuesArray[i];
			}
		}*/
	}
	std::cout << "Copy assignment for  ";
	printInfo();

	return *this;
}