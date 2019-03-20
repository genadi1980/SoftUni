#include "pch.h"
#include "Company.h"
#include "Register.h"

Register::Register(size_t numCompanies)
	: numAdded(0)
	, companyArray(new Company[numCompanies]()) {}

void Register::add(const Company & c) {
	companyArray[numAdded] = c;
	++numAdded;
}

Company Register::get(int companyId) const {
	for (int i = 0; i <= numAdded; ++i) {
		if (companyArray[i].getId() == companyId) {
			return companyArray[i];
		}
	}

	return Company();
}

Register::~Register() {
	delete[] companyArray;
	companyArray = nullptr;
}

Register& Register::operator=(const Register& other) {
	this->numAdded = other.numAdded;
	this->companyArray = other.companyArray;

	return *this;
}

Register::Register(const Register& other) 
	: numAdded(other.numAdded)
	, companyArray(other.companyArray) {}
