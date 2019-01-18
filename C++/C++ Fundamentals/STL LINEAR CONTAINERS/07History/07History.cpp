// 07History.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <stack>
#include <queue>

int main()
{
	std::string line;
	std::stack<std::string> history;
	std::queue<std::string> forward;

	getline(std::cin, line);

	while (true)
	{
		if ("end" == line) {
			break;
		}

		std::cout << "Current URL: ";
		
		if ("/back" == line) {

			if (history.size() <= 1) {

				std::cout << "No previous URLs" << std::endl;
			}
			else {
				forward.push(history.top());
				history.pop();
				std::cout << history.top() << std::endl;
			}
		} 

		else if ("/forward" == line) {

			if (forward.empty()) {
				std::cout << "No next URLs" << std::endl;

			} 
			else {
				std::cout << forward.front() << std::endl;
				history.push(forward.front());
				forward.pop();
			}
			
		}

		else {

			history.push(line);
			
			forward = std::queue<std::string>();

			std::cout << line << std::endl;
		}
		

		getline(std::cin, line);

	}

	return 0;
}

