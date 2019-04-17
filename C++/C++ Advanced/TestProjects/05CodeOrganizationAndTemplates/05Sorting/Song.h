#ifndef SONG_H

#include <string>

class Song {
private:
	std::string name;
	int lengthSeconds;

public:
	Song() {}

	Song(std::string name, int lengthSeconds) : name(name), lengthSeconds(lengthSeconds) {}

	std::string getName() const {
		return this->name;
	}

	int getLengthSeconds() const {
		return this->lengthSeconds;
	}
};
#define SONG_H
#endif //!SONG_H