#ifndef READER_H

#include <sstream>
#include <string>
#include <vector>

class Reader {
public:
	Reader(std::istream & stream) : stream(stream) {}


private:
	std::istream& stream;
	friend Reader& operator>>(Reader& reader, std::vector<int> &arr);
};

Reader & operator>>(Reader& reader, std::vector<int> &arr) {
	std::string currentArrInstr;
	std::getline(reader.stream, currentArrInstr);
	std::stringstream stream(currentArrInstr);
	int i;
	while (stream >> i) {
		arr.push_back(i);
	}

	return reader;
}
#define READER_H
#endif // !READER_H



