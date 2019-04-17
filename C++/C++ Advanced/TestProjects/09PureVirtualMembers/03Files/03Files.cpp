// 03Files.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

std::string leftTrim(std::string s) {
	s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int c) {return !std::isspace(c); }));
	return s;
}

int main()
{
	std::map<int, std::shared_ptr<FileSystemObject> > objectsById;
	std::map<int, std::shared_ptr<ByteContainer> > filesById;
	std::map<int, std::shared_ptr<FileSystemObjectsContainer> > containersById;

	std::string line;
	while (std::getline(std::cin, line) && line != "end") {
		std::istringstream lineIn(line);

		std::string command;
		int id;

		std::shared_ptr<FileSystemObject> newObject = nullptr;
		lineIn >> command >> id;
		if (command == "file") {
			std::string filename, bytes;
			lineIn >> filename;
			std::getline(lineIn, bytes);

			std::shared_ptr<File> newFile(new File(filename, leftTrim(bytes)));
			filesById[id] = newFile;
			newObject = newFile;
		}
		else if (command == "directory") {
			std::string directory;
			lineIn >> directory;

			std::shared_ptr<Directory> newDirectory(new Directory(directory));
			containersById[id] = newDirectory;
			newObject = newDirectory;
		}
		else if (command == "copy") {
			int destinationId;
			lineIn >> destinationId;

			auto objPtr = objectsById[id];
			objPtr->setParent(objectsById[destinationId]);

			auto containerPtr = containersById[destinationId];
			containerPtr->add(objPtr);
		}
		else if (command == "size") {
			std::cout << objectsById[id]->getSize() << std::endl;
		}
		else if (command == "path") {
			std::cout << objectsById[id]->getPath() << std::endl;
		}
		else if (command == "print") {
			std::cout << filesById[id]->getByte() << std::endl;
		}
		else {
			std::cout << "[unknown command]" << std::endl;
		}

		if (newObject) {
			objectsById[id] = newObject;
		}
	}

	return 0;
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
