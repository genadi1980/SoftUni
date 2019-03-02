

#include "Echo.h"

void echo(const std::string & message) {
	if (echoOn) {
		std::cout << message << std::endl;
	}
}
bool echoOn = false;
