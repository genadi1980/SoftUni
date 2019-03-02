#include "pch.h"
#include "Register.h"
#include "Company.h"


Register::Register(size_t numCompanies) : {

	companiesArray[numCompanies];
}

void Register::add(const Company& c) {
	for (size_t i = 0; i < Register::numAdded; ++i) {
		companiesArray[i] = c;
	}

}

Company Register::get(int companyId) const {
	Company c;
	

Register::~Register() {
	delete[] this->companiesArray;
}
