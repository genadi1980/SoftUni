// 03TypedStream.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <memory>

#include <string>
#include <sstream>

#include "TypedStream.h"
#include "IntStream.h"
#include "StringStream.h"
#include "VictorStream.h"

template<typename T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>& v) {
	for (T item : v) {
		out << item << " ";
	}

	return out;
}

template<>
std::ostream& operator<<(std::ostream& out, const std::vector<Vector2D>& v) {
	for (auto item : v) {
		out << (std::string)item << " ";
	}

	return out;
}


int main() {
	std::ostringstream lines;
	std::string line;
	while (std::getline(std::cin, line) && line != "end") {
		lines << line << std::endl;
	}

	std::string inputType;
	std::cin >> inputType;

	if (inputType == "int") {
		IntStream stream(lines.str());
		std::cout << stream.readToEnd() << std::endl;
	}
	else if (inputType == "string") {
		StringStream stream(lines.str());
		std::cout << stream.readToEnd() << std::endl;
	}
	else if (inputType == "vector") {
		VectorStream stream(lines.str());
		std::cout << stream.readToEnd() << std::endl;
	}
	else {
		throw std::exception();
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
