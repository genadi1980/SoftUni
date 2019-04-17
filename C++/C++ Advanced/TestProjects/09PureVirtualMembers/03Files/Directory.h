#ifndef DIRECTORY_H

#include <list>
#include <memory>
#include <string>

#include "FileSystemObject.h"
#include "FileSystemObjectContainer.h"

class Directory : public FileSystemObject, public FileSystemObjectsContainer {
	std::list<std::shared_ptr<FileSystemObject> > nestedObjects;
public:
	Directory(std::string name) : FileSystemObject(name) {}

	size_t getSize() const override {
		size_t size = 0;
		for (auto objPtr : this->nestedObjects) {
			size += objPtr->getSize();
		}

		return size;
	}

	void add(const std::shared_ptr<FileSystemObject>& obj) override {
		this->nestedObjects.push_back(obj);
	}
};
#define DIRECTORY_H
#endif //!DIRECTORY_H