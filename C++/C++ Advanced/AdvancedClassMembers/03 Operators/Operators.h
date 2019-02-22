#ifndef OPERATORS_H
#define OPERATORS_H

#include <ostream>
#include <vector>
#include <string>
#include <sstream>

std::string operator+(std::string & numberedLines, const int & a) {
	
	numberedLines = numberedLines + std::to_string(a);

	return numberedLines;
}

std::vector<std::string>& operator<<(std::vector<std::string> & formattedLines, std::string str) {
	
		 formattedLines.push_back(str);	
		 return formattedLines;
}

std::ostream& operator<<(std::ostream& os,  std::vector<std::string>& v)
{
for (int i = 0; i < v.size(); ++i)
{
os << v[i] << "\n";
}
return os;
}

#endif // !OPERATORS_H
