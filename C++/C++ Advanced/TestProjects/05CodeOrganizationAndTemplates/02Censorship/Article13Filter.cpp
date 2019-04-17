#include "Article13Filter.h"

Article13Filter::Article13Filter(std::set<std::string> copyrighted) : copyrighted(copyrighted) {}

bool Article13Filter::blockIfCopyrighted(std::string s) {
	if (isCopyrighted(s)) {
		Article13Filter::blocked.push_back(s);
		return true;
	}
	else
		return false;
}

bool Article13Filter::isCopyrighted(std::string s) {
	std::set<std::string>::iterator it = Article13Filter::copyrighted.begin();
	bool isIn;
	while (it != Article13Filter::copyrighted.end()) {
		if (*it == s) {
			isIn = true;
			break;
		}
		else
			isIn = false;

		++it;
	}
	return isIn;
}

std::vector<std::string> Article13Filter::getBlocked() {
	return Article13Filter::blocked;
}