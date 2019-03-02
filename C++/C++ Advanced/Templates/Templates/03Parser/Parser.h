#ifndef PARSER_H


template<typename T>
void printVector(std::vector<T> & numbers) {
	typename std::vector<T>::iterator it;
	for (it = numbers.begin(); it != numbers.end(); ++it) {
		std::cout << *it << " ";
	}
}

#define PARSER_H
#endif // !PARSER_H

