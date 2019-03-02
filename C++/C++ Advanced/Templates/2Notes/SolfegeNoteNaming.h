#ifndef  SOLFEGE_NOTE_NAMING_H


#include "NoteName.h"
#include <string>


class SolfegeNoteNaming {
public:
	NoteName operator()(const std::string & noteText) const {

		char letter = ' ';
		if ("Do" == noteText) {
			letter = 'C';
		}
		else if ("Re" == noteText) {
			letter = 'D';
		}
		else if ("Mi" == noteText) {
			letter = 'E';
		}
		else if ("Fa" == noteText) {
			letter = 'F';
		}
		else if ("Sol" == noteText) {
			letter = 'G';
		}
		else if ("La" == noteText) {
			letter = 'A';
		}
		else if ("Si" == noteText) {
			letter = 'B';
		}
		else {
			letter = '?';
		}

		return NoteName(letter);
	}
};
#define SOLFEGE_NOTE_NAMING_H
#endif // ! SOLFEGE_NOTE_NAMING_H
