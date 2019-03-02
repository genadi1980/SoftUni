// 03Parser.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

#include "Parser.h"
#include "PrintUtils.h"

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
	char type;
	std::cin >> type; std::cin.ignore();
	std::string stopLine;
	std::getline(std::cin, stopLine);

	if (type == 'i') {
		Parser<int> p(std::cin, stopLine);
		int n;
		std::vector<int> numbers;
		while (p.readNext(n)) {
			numbers.push_back(n);
		}
		printVector(numbers);
	}
	else if (type == 'w') {
		Parser<std::string> p(std::cin, stopLine);
		std::string w;
		std::vector<std::string> words;
		while (p.readNext(w)) {
			words.push_back(w);
		}
		printVector(words);
	}
	else if (type == 's') {
		Parser<Song> p(std::cin, stopLine);
		Song s;
		std::vector<Song> songs;
		while (p.readNext(s)) {
			songs.push_back(s);
		}
		printVector(songs);
	}
	else {
		std::cout << "[invalid input]" << std::endl;
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
