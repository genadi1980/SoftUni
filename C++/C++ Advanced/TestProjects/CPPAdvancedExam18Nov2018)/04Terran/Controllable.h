#ifndef CONTROLLABLE_H


#include <string>
#include <vector>

typedef char Id;

inline Id parseId(std::string s) {
	return s[0];
}

class Controllable {
public:
	virtual Id getId() const = 0;

	virtual void handleCommand(const std::vector<std::string>& commandParts) = 0;

	virtual ~Controllable() {}
};

typedef Controllable* ControllablePtr;

#define CONTROLLABLE_H
#endif // !CONTROLLABLE_H

