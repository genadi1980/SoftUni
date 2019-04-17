#include "pch.h"
#include <iostream>
#include <ostream>

class Lecturer {
	double rating;
	std::string name;
public:
	Lecturer() {
		std::cout << "Lecturer default ctor BODY" << std::endl;
	}

};

class Lesson {
	Lecturer lecture;
	std::string subject;
	int numStudents;

	friend std::string operator<<(std::ostream& stream, const Lesson& l);
public:
	Lesson(std::string name) : subject(name) {
		std::cout << "Lesson default ctor BODY" << std::endl;
	}

	std::string getSubject() const {
		return this->subject;
	}
};

std::string operator<<(std::ostream& stream, const Lesson& l) {
	return  stream << l.subject;
}

int main() {
	Lesson lesson("Softuni lectures");
	

	std::cout << lesson;
	
	return 0;


}