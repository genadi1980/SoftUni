// 04SplitAndJoin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Join.h"
#include "Split.h"

#include <iostream>
#include <string>
#include <vector>

class Song {
private:
	std::string name;
	int lengthSeconds;
public:
	Song() {}

	Song(std::string name, int lengthSeconds) : name(name), lengthSeconds(lengthSeconds) {}

	std::string getName() const {
		return this->name;
	}

	int getLengthSeconds() const {
		return this->lengthSeconds;
	}
};

std::ostream& operator<<(std::ostream& out, const Song& s) {
	return out << s.getName() << " " << s.getLengthSeconds();
}

std::istream& operator>>(std::istream& in, Song& s) {
	std::string name; int length;
	in >> name >> length;

	s = Song(name, length);
	return in;
}

int main() {
	std::string separatorLine;
	std::getline(std::cin, separatorLine);
	char separator = separatorLine[0];

	std::string line;
	std::getline(std::cin, line);

	char type;
	std::string joinStr;
	std::cin >> type >> joinStr;

	std::string joined = "";
	if (type == 'i') {
		std::vector<int> numbers = split<int>(line, separator);
		joined = join(numbers, joinStr);
	}
	else if (type == 'w') {
		std::vector<std::string> words = split<std::string>(line, separator);
		joined = join(words, joinStr);
	}
	else if (type == 's') {
		std::vector<Song> songs = split<Song>(line, separator);
		joined = join(songs, joinStr);
	}
	else {
		std::cout << "[invalid input]" << std::endl;
	}

	std::cout << joined << std::endl;

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
