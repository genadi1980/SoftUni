#ifndef BUFFERED_EXTRACTOR_H

#include <sstream>

#include "Extractor.h"

class BufferdExtractor : public Extractor {
protected:
	std::ostringstream buffer;
	bool process(char symbol, std::string& output) override {
		if (shouldBuffer(symbol)) {
			buffer << symbol;
			return false;
		}
		else if (!buffer.str().empty()) {
			output = buffer.str();

			buffer.str("");
			buffer.clear();
			return true;
		}
	}

	virtual bool shouldBuffer(char symbol) = 0;
public:
	BufferdExtractor(std::istream& steram) : Extractor(steram) {}
};

#define BUFFERED_EXTRACTOR_H
#endif //!BUFFERED_EXTRACTOR_H