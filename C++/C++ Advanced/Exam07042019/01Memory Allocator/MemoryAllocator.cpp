
//#include "pch.h"
#include "Defines.h"
#include <vector>
#include <sstream>
#include <iostream>
#include <set>
#include <utility>


ErrorCode executeCommand(const std::string &  command,
	std::vector<int *> & memory) {
	
	std::istringstream input(command);
	std::string inputCmd;
	int index = 0;
	int SIZE = memory.size();
	
	
		input >> inputCmd >> index;

		if ("Allocate" == inputCmd) {
			if (index < SIZE) {
					if (nullptr != memory[index]) {
						return ErrorCode(2);
					}
					else {
						memory[index] = new int;
						return ErrorCode(0);
						
					}
				
				}
			else {
				return ErrorCode(4);
			}
		}
		else if ("Deallocate" == inputCmd) {
			
			if (index < SIZE) {
				if (nullptr == memory[index]) {
					return ErrorCode(3);
				}
				else {
					delete memory[index];
					memory[index] = nullptr;
					return ErrorCode(0);
				}

			}
			else {
				return ErrorCode(4);
			}
		}
		else if ("Idle" == inputCmd) {
			return ErrorCode(1);
		}
		else return ErrorCode(0);
	
}

void printResult(const ErrorCode  errorCode, const std::string & command) {
	
	
	if (errorCode == 0) {

		std::cout << command << " - success" << '\n';
	}
	else if (errorCode == 1) {
		std::cout << command << " - this exam is a piece of cake! Where is the OOP already?!?" << '\n';
	}
	else if (errorCode == 2) {
		std::cout << command <<  " - memory leak prevented, will not make allocation" << '\n';
	}

	else if (errorCode == 3) {
		std::cout << command << " - system crash prevented, will skip this deallocation" << '\n';
	}

	else if (errorCode == 4) {
		std::cout << command << " - out of bound" << '\n';
	}
	
	
}