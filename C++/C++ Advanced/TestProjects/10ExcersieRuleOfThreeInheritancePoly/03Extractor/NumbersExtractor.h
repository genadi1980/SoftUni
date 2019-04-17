#ifndef NUMBERS_EXTRACTOR_H

#include "BufferdExtractor.h"

class NumbersExtractor : public BufferdExtractor {
public:
	NumbersExtractor(std::istream & stream);
	virtual ~NumbersExtractor();

	virtual bool shouldBuffer(char symbol) override;
};
#define NUMBERS_EXTRACTOR_H
#endif // !NUMBERS_EXTRACTOR_H



