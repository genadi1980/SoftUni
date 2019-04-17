#ifndef  NOTE_NAME_H

class NoteName {
	char englishName;
public:
	NoteName(char englishName) : englishName(englishName) {}

	operator char() const {
		return this->englishName;
	}
};
#define NOTE_NAME_H
#endif // ! NOTE_NAME_H
