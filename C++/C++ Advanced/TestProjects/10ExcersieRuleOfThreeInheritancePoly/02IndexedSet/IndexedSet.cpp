#include "pch.h"
#include "IndexedSet.h"

IndexedSet::IndexedSet() : valuesArray(nullptr) {}


IndexedSet::IndexedSet(const IndexedSet& other) : valuesSet(other.valuesSet) {
	if (other.valuesArray == nullptr) {
		valuesArray = nullptr;
	}
	else {
		const size_t SIZE = other.size();
		valuesArray = new Value[SIZE];

		for (size_t i = 0; i < SIZE; i++) {
			valuesArray[i] = other.valuesArray[i];
		}
	}
	
}

void IndexedSet::add(const Value& v) {
	valuesSet.insert(v);
	clearIndex();
}

size_t IndexedSet::size() const {
	return valuesSet.size();
}

const Value& IndexedSet::IndexedSet::operator[](size_t index) {
	if (nullptr != valuesArray) {
		return valuesArray[index];
	}
	
	buildIndex();

	return valuesArray[index];
}

IndexedSet& IndexedSet::operator=(const IndexedSet& other) {
	
	if (this != &other) {
		
		clearIndex();

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
		}
	}
	return *this;
}

void IndexedSet::buildIndex() {
	valuesArray = new Value[valuesSet.size()];

	std::set<Value>::iterator it = valuesSet.begin();
	int idx = 0;
	for (; it != valuesSet.end(); ++it) {
		valuesArray[idx] = *it;

		idx++;
	}
}
void IndexedSet::clearIndex() {
	if (nullptr != valuesArray) {
		delete[] valuesArray;
		valuesArray = nullptr;
	}
}
IndexedSet::~IndexedSet() {
	clearIndex();
}