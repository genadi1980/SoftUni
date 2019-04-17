#ifndef NOTENAME_H

class NoteName {
	char englishName;
public:
	NoteName(char englishName) : englishName(englishName) {}

	operator char() const {
		return this->englishName;
	}
};
#define NOTENAME_H
#endif //!NOTENAME_H