#ifndef DESERIALIZE_UTILS_H

#include <string>
#include <vector>
#include <ostream>

std::vector<std::string> deserializeStrings(char* & serialized) {
	std::vector<std::string> words;
	int numberOfStrings = static_cast<int>(serialized[0]);
	std::string word;
	int counter = 1;
	for (size_t i = 0; i < numberOfStrings; i++) {

		int stringLength = serialized[counter];
		word = "";
			
			for (size_t j = 0; j < stringLength; j++) {
				counter++;
				char letter = serialized[counter];
				word += letter;
			
			}
			words.push_back(word);
			counter++;
	}
	 

		return words;
}
#define DESERIALIZE_UTILS_H 
#endif // !DESERIALIZE_UTILS_H
