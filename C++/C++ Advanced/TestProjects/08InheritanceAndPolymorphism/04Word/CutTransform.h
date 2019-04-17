#ifndef CUT_TRANSFORM

#include <string>
#include "TextTransform.h"

class CutTransform : public TextTransform {
	std::string lastCut;
public:
	void invokeOn(std::string& text, int startInd, int endInd) override {
		std::string::iterator startIter = text.begin() + startInd;
		std::string::iterator endIter = text.begin() + endInd;

		this->lastCut = std::string(startIter, endIter);
		text.erase(startIter, endIter);
	}

	std::string getLastCut() {
		return this->lastCut;
	}
};
#define CUT_TRANSFORM
#endif//!CUT_TRANSFORM