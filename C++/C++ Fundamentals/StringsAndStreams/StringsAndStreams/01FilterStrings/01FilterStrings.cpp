
#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main()
 {
	std::string input;
	std::getline(std::cin, input);
	
	int iter = input.size();

	std::stringstream stream(input);
	
	 
	while (iter > 0) {
		char n;
		stream >> n;
		if (n >= '0' && n <= '9') {
			std::cout << n;
		}
		iter--;
		
	}
}

