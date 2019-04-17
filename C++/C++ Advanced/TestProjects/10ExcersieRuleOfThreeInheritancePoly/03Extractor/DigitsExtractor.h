#ifndef DIGITS_EXTRACTOR_H
#include "Extractor.h"
class DigitsExtractor :
	public Extractor
{
public:
	DigitsExtractor(std::istream & stream);
	virtual ~DigitsExtractor();

	virtual bool process(char symbol, std::string& output) override;
};

#define DIGITS_EXTRACTOR_H
#endif //! DIGITS_EXTRACTOR_H