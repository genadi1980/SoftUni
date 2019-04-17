
#include "NumbersExtractor.h"

#include <cctype>

NumbersExtractor::NumbersExtractor(std::istream & stream) : BufferdExtractor(stream) {}

NumbersExtractor::~NumbersExtractor() {}

bool NumbersExtractor::shouldBuffer(char symbol) {
	return isdigit(symbol);
}