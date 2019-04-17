#ifndef BYTE_CONTAINER_H

#include <string>

class ByteContainer {
public:
	virtual std::string getBytes() const = 0;

	virtual ~ByteContainer() {}
};

#define BYTE_CONTAINER_H
#endif //!BYTE_CONTAINER_H
