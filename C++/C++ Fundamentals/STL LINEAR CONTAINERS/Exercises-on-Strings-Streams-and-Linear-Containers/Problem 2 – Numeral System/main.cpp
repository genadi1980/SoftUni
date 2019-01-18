#include <iostream>
#include <string>
#include <vector>

std::string intToSystemNumber(const std::string baseInput,
							  const int         number)
{
	//abcdefghij
	//300
	std::string answer;
	std::string numberStr = std::to_string(number);
	answer.resize(numberStr.size());

	for(size_t i = 0; i < numberStr.size(); ++i)
	{
		const int index = numberStr[i] - '0';

		answer[i] = baseInput[index];
	}

	return answer;
}

int numberSystemToInt(const std::vector<int> & allValues,
					  const std::string        valueStr)
{
	int answer = 0;

	int multiplier = 1;

	const int SIZE = (int)valueStr.size();
	for(int i = SIZE - 1; i >= 0; --i)
	{
		const int index = valueStr[i];

		answer += (multiplier * allValues[index]);
		multiplier *= 10;
	}

	return answer;
}

int main()
{
	std::string baseInput;
	getline(std::cin, baseInput);

	std::string firstNumberStr;
	getline(std::cin, firstNumberStr);

	std::string secondNumberStr;
	getline(std::cin, secondNumberStr);

	std::vector<int> numberValues(255, 0);
	for(size_t i = 0; i < baseInput.size(); ++i)
	{
		//abcdefghij
		const unsigned char letter = baseInput[i];

		numberValues[letter] = i;
	}

	const int firstNumberInt =
			numberSystemToInt(numberValues, firstNumberStr);

	const int secondNumberInt =
			numberSystemToInt(numberValues, secondNumberStr);

	const int answerInt = firstNumberInt + secondNumberInt;

//	std::cout << answerInt << std::endl;

	std::cout << intToSystemNumber(baseInput, answerInt);

	return 0;
}
