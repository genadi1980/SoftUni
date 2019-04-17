#ifndef INT_STREAM_H

#include "TypedStream.h"

class IntStream : public TypedStream<int> {
public:
	IntStream(const std::string& input) : TypedStream(input) {}

	TypedStream<int>& operator>>(int& i) override {
		this->stream >> i;
		return *this;
	}
};

#define INT_STREAM_H
#endif // !INT_STREAM_H
