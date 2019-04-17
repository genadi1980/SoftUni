// 05Sequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "Sequence.h"

class IntegersGenerator {
	int last;
public:
	IntegersGenerator(): last(0) {}

	int operator()() {
		return this->last++;
	}
};

class FibonacciGenerator {
	int last;
	int current;
public:
	FibonacciGenerator() : last(0), current(0) {}

	int operator()() {
		if (this->current == 0 && this->last == 0) {
			this->last = 1;
			return 0;
		}

		int next = this->last + this->current;
		this->last = this->current;
		this->current = next;

		return next;
	}
};

template<typename T, typename Generator>
void readGenerateWrite() {
	Sequence<T, Generator> sequence;

	int numToGenerate;
	std::cin >> numToGenerate;
	sequence.generateNext(numToGenerate);

	for (T element : sequence) {
		std::cout << element << " ";
		std::cin >> numToGenerate;
		sequence.generateNext(numToGenerate);
	}
}
int main()
{
	char generatorType;
	std::cin >> generatorType;
	if (generatorType == 'i') {
		readGenerateWrite<int, IntegersGenerator>();
	}
	else if (generatorType == 'f') {
		readGenerateWrite<int, FibonacciGenerator>();
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
