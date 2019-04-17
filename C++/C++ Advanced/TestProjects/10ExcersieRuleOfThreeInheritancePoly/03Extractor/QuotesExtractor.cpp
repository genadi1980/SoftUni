
#include "QuotesExtractor.h"


QuotesExtractor::QuotesExtractor(std::istream & stream)
	: BufferdExtractor(stream)
	, _hasQuote(false) {}


QuotesExtractor::~QuotesExtractor()
{
}

bool QuotesExtractor::shouldBuffer(char symbol) {
	if ('"' == symbol) {
		_hasQuote = !_hasQuote;
		return false;
	}

	return _hasQuote;
}
