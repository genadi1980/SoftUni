// 05Explorer.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
#include "FileSystemObjectsContainer.h"
#include "Directory.h"
#include "Shortcuts.h"

#include "TreeView.h"
#include "Explorer.h"

std::string leftTrim(std::string s) {
	s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int c) {return !std::isspace(c);  }));
	return s;
}

int main()
{
	std::vector<std::shared_ptr<FileSystemObject> > rootObjects;

	Explorer explorer(rootObjects);

	std::string line;
	while (std::getline(std::cin, line) && line != "end") {
		std::istringstream lineIn(line);

		std::string command;
		lineIn >> command;

		if (command == "mf") {
			std::string filename;
			lineIn >> filename;

			std::string contents;
			std::getline(lineIn, contents);

			explorer.createFile(filename, leftTrim(contents));
		}
		else if (command == "md") {
			std::string directory;
			lineIn >> directory;

			explorer.createDirectory(directory);
		}
		else if (command == "cut") {
			std::string name;

			explorer.cut(name);
		}
		else if (command == "paste") {
			explorer.paste();
		}
		else if (command == "sc") {
			std::string name;
			lineIn >> name;

			explorer.createShortcut(name);
		}
		else if (command == "cd") {
			std::string path;
			std::getline(lineIn, path);

			explorer.navigate(leftTrim(path));
		}
	}
	std::sort(rootObjects.begin(), rootObjects.end(), [](const std::shared_ptr<FileSystemObject> a, const std::shared_ptr<FileSystemObject> b) {
		return a->getName() < b->getName();
	});

	std::cout << getTreeView(rootObjects) << std::endl;

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
