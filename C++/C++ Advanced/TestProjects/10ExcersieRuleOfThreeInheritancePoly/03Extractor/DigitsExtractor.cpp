
#include "DigitsExtractor.h"
#include <cctype>

DigitsExtractor::DigitsExtractor(std::istream & stream) : Extractor(stream) {}

DigitsExtractor::~DigitsExtractor() {}

bool DigitsExtractor::process(char symbol, std::string& output) {
	if (isdigit(symbol)) {
		output = symbol;
		return true;
	}
	return false;

}