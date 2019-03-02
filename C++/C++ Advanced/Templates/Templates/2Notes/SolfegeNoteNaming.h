#ifndef SolfegeNoteNaming_h_
#define SolfegeNoteNaming_h_


class SolfegeNoteNaming {
public: 
	NoteName operator () (const std::string & noteText) const {
		
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
		else 
		return NoteName(' ');
	}
};

#endif // !SolfegeNoteNaming_h_
