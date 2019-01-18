
#include "pch.h"

#include <iostream>
#include <sstream>
#include <stack>
#include <string>

void ReadWords(std::stack<std::string> & wordsOut) 
{
	std::string input = "";
	std::string word = "";

	getline(std::cin, input);

	while (true)
	{
		if ("end" == input)
		{
			break;
		}

		std::istringstream stream(input);

		while (stream >> word)
		{
			wordsOut.push(word);
		}

		getline(std::cin, input);

	}
}

int main() 
{
	
	std::stack<std::string> reverse;
	
	ReadWords(reverse);

	while (!reverse.empty())
	{
		std::cout << reverse.top() << ' ';
			reverse.pop();
			 
	}

	std::cout << std::endl;

	return 0;
}