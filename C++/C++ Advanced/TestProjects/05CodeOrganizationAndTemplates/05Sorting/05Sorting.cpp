// 05Sorting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <set>

#include "Song.h"
#include "Parser.h"
#include "Comparators.h"
#include "PrintUtils.h"

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
		typedef std::set<int, Reverse<int, LessThan<int> > > Set;
		Set numbers;
		while (p.readNext(n)) {
			numbers.insert(n);
		}
		printContainer<Set>(numbers.begin(), numbers.end());
	}
	else if (type == 'w') {
		Parser<std::string> p(std::cin, stopLine);
		std::string w;
		typedef std::set<std::string, Reverse<std::string, LessThan<std::string> > > Set;
		Set words;
		while (p.readNext(w)) {
			words.insert(w);
		}
		printContainer<Set>(words.begin(), words.end());
	}
	else if (type == 's') {
		Parser<Song> p(std::cin, stopLine);
		Song s;
		typedef std::set<Song, Reverse<Song, LessThan<Song> > > Set;
		Set songs;
		while (p.readNext(s)) {
			songs.insert(s);
		}
		printContainer<Set>(songs.begin(), songs.end());
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
