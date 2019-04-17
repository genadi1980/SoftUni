// 04Tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <memory>
#include <map>
#include <algorithm>
#include <cctype>

#include "FileSystemObject.h"
#include "ByteContainer.h"
#include "File.h"
#include "FileSystemObjectContainer.h"
#include "Directory.h"
#include "TreeView.h"


std::string leftTrim(std::string s) {
	s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int c) {return !std::isspace(c); }));
	return s;
}

class Shortcuts : public FileSystemObject, public FileSystemObjectContainer {
	std::vector<std::shared_ptr<FileSystemObject> > items;
public:
	Shortcuts() : FileSystemObject("[shortcuts]") {}

	void add(const std::shared_ptr<FileSystemObject>& obj) override {
		this->items.push_back(obj);
	}

	std::vector<std::shared_ptr<FileSystemObject> >::const_iterator begin() const override {
		return this->items.begin();
	}

	std::vector<std::shared_ptr<FileSystemObject> >::const_iterator end() const override {
		return this->items.end();
	}

	size_t getSize() const override {
		return 0;
	}
};

void moveTo(std::shared_ptr<FileSystemObject> obj, std::shared_ptr<Directory> container) {
	container->add(obj);
	obj->setParent(container);
}

int main()
{
	std::map<int, std::shared_ptr<FileSystemObject> > objectsById;
	std::map<int, std::shared_ptr<Directory> > directoriesById;
	std::shared_ptr<Shortcuts> shortcuts;

	std::string line;
	while (std::getline(std::cin, line) && line != "end") {
		std::istringstream lineIn(line);

		std::string command;
		int id;

		std::shared_ptr<FileSystemObject> newObject = nullptr;
		lineIn >> command;

		if (command == "file") {
			std::string filename;
			lineIn >> id >> filename;

			std::string contents;
			std::getline(lineIn, contents);

			newObject = std::make_shared<File>(filename, contents);
		}
		else if (command == "directory") {
			std::string directory;
			lineIn >> id >> directory;

			std::shared_ptr<Directory> newDirectory = std::make_shared<Directory>(directory);
			directoriesById[id] = newDirectory;
			newObject = newDirectory;
		}
		else if (command == "move") {
			int destinationId;
			lineIn >> id >> destinationId;

			moveTo(objectsById[id], directoriesById[destinationId]);
		}
		else if (command == "shortcut") {
			int targetId;
			lineIn >> targetId;

			if (!shortcuts) {
				shortcuts = std::make_shared<Shortcuts>();
				newObject = shortcuts;
				id = -1;
			}

			shortcuts->add(objectsById[targetId]);
		}

		if (newObject) {
			objectsById[id] = newObject;
		}
	}
	std::vector<std::shared_ptr<FileSystemObject> > rootObject;
	for (auto idAndObject : objectsById) {
		auto parentPtr = idAndObject.second->getParent().lock();
		if (!parentPtr) {
			rootObject.push_back(idAndObject.second);
		}
	}

	std::sort(rootObject.begin(), rootObject.end(), [](const std::shared_ptr<FileSystemObject> a, const std::shared_ptr<FileSystemObject> b) {
		return a->getName() < b->getName();
	});

	std::cout << getTreeView(rootObject) << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
