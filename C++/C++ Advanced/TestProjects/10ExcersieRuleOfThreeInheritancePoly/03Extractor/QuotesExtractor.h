#ifndef QUOTES_EXTRACTOR_H

#include "BufferdExtractor.h"
 
class QuotesExtractor :
	public BufferdExtractor
{
public:
	QuotesExtractor(std::istream & stream);
	virtual ~QuotesExtractor();

	virtual bool shouldBuffer(char symbol) override;

private:
	bool _hasQuote;
};

#define QUOTES_EXTRACTOR_H
#endif // !QUOTES_EXTRACTOR_H