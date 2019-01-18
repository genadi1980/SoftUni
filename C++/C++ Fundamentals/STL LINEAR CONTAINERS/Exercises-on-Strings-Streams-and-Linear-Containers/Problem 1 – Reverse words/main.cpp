#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>

void initPopulate(std::stack<std::string> & wordsOut)
{
	std::string line;
	std::string word;
	getline(std::cin, line);

	while(true)
	{
		if("end" == line)
		{
			break;
		}

		std::istringstream stream(line);

		while(stream >> word)
		{
			wordsOut.push(word);
		}

		getline(std::cin, line);
	}
}

int main()
{
	std::stack<std::string> words;
	initPopulate(words);

//	std::vector<std::string>::iterator it;
//	std::vector<std::string>::reverse_iterator revIt;
//
//	for(revIt = words.rbegin(); revIt != words.rend(); ++revIt)
//	{
//		std::cout << *revIt << ' ';
//	}

	while(!words.empty())
	{
		std::cout << words.top() << ' ';
		words.pop();
	}

	std::cout << std::endl;

	return 0;
}
