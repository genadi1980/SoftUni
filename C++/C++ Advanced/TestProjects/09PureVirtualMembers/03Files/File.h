#ifndef FILE_H

#include <cstdlib>
#include <string>

#include "FileSystemObject.h"
#include "ByteContainer.h"

class File : public FileSystemObject, public ByteContainer {
	std::string bytes;
public:
	File(std::string name, std::string bytes) : FileSystemObject(name), bytes(bytes) {}

	std::string getByte() const override {
		return this->bytes;
	}

	size_t getSize() const override {
		return this->getByte().size();
	}
};
#define FILE_H
#endif // !FILE_H