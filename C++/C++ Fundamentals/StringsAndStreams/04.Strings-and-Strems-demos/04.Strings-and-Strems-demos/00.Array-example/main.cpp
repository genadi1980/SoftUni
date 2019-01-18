#include <iostream>
#include <vector>
using namespace std;

int main() {

	//this is Invalid C/C++ (gcc supports it under g++ extension)
	int runTimeSize = 0;
	std::cout << "Enter array size: ";
	std::cin >> runTimeSize;
	int invalidArray[runTimeSize] = { 0 };
	cout << "invalidArray[0]: " << invalidArray[0] << std::endl;

	//this is valid C/C++
	const int COMPILE_TIME_SIZE = 5;
	int validArray[COMPILE_TIME_SIZE] = { 0 };
	cout << "validArray[0]: " << validArray[0] << std::endl;

	int anotherValidArray[5] = { 0 };
	cout << "anotherValidArray[0]: " << anotherValidArray[0] << std::endl;

	std::vector<int> validVector(5);
	cout << "validVector[0]: " << validVector[0] << std::endl;

	std::vector<int> anotherValidVector;
	anotherValidVector.resize(5);
	cout << "anotherValidVector[0]: " << anotherValidVector[0] << std::endl;

    return 0;
}
