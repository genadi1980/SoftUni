#include "pch.h"
#include "Group.h"
#include <algorithm>

int maxUnits = 12;

void Group::clear() {
	if (units != nullptr) {
		//delete[] units;
		unitsAdded = 0;
		units = nullptr;
	}
	unitsAdded = 0;
	units = nullptr;
}

Group::Group() {
	unitsAdded = 0;
	units = nullptr;
}

Group::Group(const Group& other) {
	units = other.units;
	unitsAdded = other.unitsAdded;
}

void Group::add(UnitPtr unit) {
	if (unitsAdded < maxUnits) {
		for (int i = 0; i < unitsAdded; ++i) {
			if (unit == units[i])
				return;
		}
	}
	if (unitsAdded == 0) {
		units = new UnitPtr[1];
		units[0] = unit;
		unitsAdded = 1;
	}
	else if (unitsAdded < maxUnits) {
		UnitPtr* newUnits = new UnitPtr[unitsAdded + 1];
		for (int i = 0; i < unitsAdded; ++i) {
			newUnits[i] = units[i];
		}
		newUnits[unitsAdded] = unit;
		//delete[] units;
		units = newUnits;
		++unitsAdded;
	}
	else {
		for (int i = 0; i < unitsAdded - 1; ++i) {
			units[i] = units[i + 1];
		}
		units[unitsAdded - 1] = unit;
	}
}

Group& Group::operator=(const Group& other) {
	clear();
	this->units = other.units;
	this->unitsAdded = other.unitsAdded;
	return *this;
}

Group& Group::operator<<(const Group& other) {
	for (int i = 0; i < other.unitsAdded; ++i) {
		this->add(other.units[i]);
	}
	return *this;
}

Group::~Group() {
	clear();
}

std::ostream& operator<<(std::ostream& out, const Group& group) {
	std::vector<char> OutputVec;
	for (int i = 0; i < group.unitsAdded; ++i) {
		OutputVec.push_back(group.units[i]->getId());
	}
	std::sort(OutputVec.begin(), OutputVec.end());
	for (char c : OutputVec) {
		out << c << " ";
	}
	return out;
}