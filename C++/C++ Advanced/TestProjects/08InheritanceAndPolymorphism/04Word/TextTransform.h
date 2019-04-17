#ifndef TEXT_TRANSFORM_H

#include <string>

class TextTransform {
public: 
	virtual void invokeOn(std::string& text, int startIndex, int endIndex) = 0;

	virtual ~TextTransform() = default;
};
#define TEXT_TRANSFORM_H
#endif // !TEXT_TRANSFORM_H
