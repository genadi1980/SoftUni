
#include "pch.h"
#include "Range.h"

Range::Range() 
	: rangeFirst(0)
	, rangeLength(0)
	, valueCounts(nullptr) {}

Range::Range(const Range& other) 
	: rangeFirst(0)
	, rangeLength(0)
	, valueCounts(nullptr) {
	if (!other.empty()) {
		Range::copyValues(other);
		rangeFirst = other.rangeFirst;
		rangeLength = other.rangeLength;
	}

}


Range& Range::operator=(const Range& other) {
	if (this != &other) {

		clear();

		if (!other.empty()) {
			Range::copyValues(other);
			rangeFirst = other.rangeFirst;
			rangeLength = other.rangeLength;
		}

	}

	return *this;
}

Range::~Range() {
	clear();
}

void Range::add(T value){
	
	if (empty()) {
		resize(value, value);
	}
	else if (value < rangeFirst) {
		resize(value, rangeFirst + rangeLength);
	}

	else if (value >= rangeFirst + rangeLength) {
		resize(rangeFirst, value);
	}
	else {
		++(valueCounts[getIndex(value)]);
	}
}
size_t Range::getCount(T value) const {
	if ((value < rangeFirst) || 
		(value >= rangeFirst + rangeLength)) {
		return 0;
	}
	return valueCounts[getIndex(value)];
}


void Range::clear() {
			rangeFirst = 0;
			rangeLength = 0;

			if (nullptr != valueCounts) {
				delete[] valueCounts;
				valueCounts = nullptr;
			}
}

void Range::resize(T first, T last) {
	const int NEW_RANGE = last - first + 1;
	size_t * newData = new size_t[NEW_RANGE];
	for (int i = 0; i < NEW_RANGE; i++) {
		newData[i] = 0;
	}

	if (!empty()) {

		int offset = 0;
		if (first < rangeFirst) {
			offset = rangeFirst - first;
		}

		for (int i = 0; i < rangeLength; i++) {
			newData[i + offset] = valueCounts[i];
		}

		clear();
		
	}
	valueCounts = newData;
	rangeFirst = first;
	rangeLength = last;
	
}

size_t Range::getIndex(T value) const {
	return value - rangeFirst;
	}

bool Range::empty() const {
	return !valueCounts;
}

