#ifndef STRING_STREAM_H

#include <string>
#include "TypedStream.h"

class StringStream : public TypedStream<std::string> {
public:
	StringStream(const std::string& input) : TypedStream(input) {}

	TypedStream<std::string>& operator>>(std::string& s) override {
		this->stream >> s;
		return *this;
	}
};

#define STRING_STREAM_H
#endif //!STRING_STREAM_H