#ifndef EXTRACTOR_INITIALIZATION_H

#include <memory>
#include "Extractor.h"
#include "DigitsExtractor.h"
#include "NumbersExtractor.h"
#include "QuotesExtractor.h"

std::shared_ptr<Extractor> getExtractor(const std::string & extractType, std::istringstream & lineIn) {
	
	if (extractType == "digits")
	{
		return std::make_shared<DigitsExtractor>(lineIn);
	}
	else if (extractType == "numbers"){
		return std::make_shared<NumbersExtractor>(lineIn);
	}
	else if(extractType == "quotes")
	{
		return std::make_shared<QuotesExtractor>(lineIn);
	}
	return nullptr;
}
#define EXTRACTOR_INITIALIZATION_H
#endif //!EXTRACTOR_INITIALIZATION_H