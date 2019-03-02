#ifndef SPLIT_H
#include <string>
#include <vector>
#include <sstream>

template<typename T>
std::vector<T> split(std::string & line, char separator) {
	std::vector<T> streamed;
	std::string s;
	std::getline(line, s, separator);

	for (int i = 0; i < s.size(); ++i) {

		if (s[i] == separator) {
			line[i] = 'I';
		}
		streamed[i] = line[i];
	}
	return streamed;
	}
#define SPILT_H
#endif // !SPLIT_H
