#ifndef PASTE_TRANSFORM_H

#include <memory>
#include <string>

#include "TextTransform.h"
#include "CutTransform.h"

class PasteTransform : public TextTransform {
	std::shared_ptr<CutTransform> cutTransform;
public:
	PasteTransform(std::shared_ptr<CutTransform> cutTransform) : cutTransform{cutTransform} {}

	void invokeOn(std::string& text, int startInd, int endInd) override {
		std::string::iterator startIter = text.begin() + startInd;
		std::string::iterator endIter = text.begin() + endInd;

		text.replace(startIter, endIter, this->cutTransform->getLastCut());
	}
};

#define PASTE_TRANSFORM_H
#endif //!PASTE_TRANSFORM_H