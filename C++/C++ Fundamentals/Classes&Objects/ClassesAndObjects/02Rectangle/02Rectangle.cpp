// 02Rectangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

class Rectangle {
private:
	double side1 = 0;
	double side2 = 0;
	double rectArea = 0;
	double rectPerimeter = 0;

public: 
	double getSides1() {
		return this->side1;
	}

	double getSides2() {
		return this->side2;
	}

	double getRectArea() {
		return this->rectArea;
	}

	double getRectParameter() {
		return this->rectPerimeter;
	}

	void setRectanglePerimeter(double &side1, double &side2) {
		this->side1 = side1;
		this->side2 = side2;
		this->rectArea = side1 * side2;
		this->rectPerimeter = (side1 + side2) * 2;
	}

	Rectangle(double side1 = 0, double side2 = 0) :
		side1(side1),
		side2(side2),
		rectArea(side1 * side2),
		rectPerimeter((side1 + side2) * 2){
	}
};

int main()
{
	double x1, x2;
	std::cin >> x1 >> x2;
	Rectangle rect(x1, x2);

	double area = rect.getRectArea();
	double perimeter = rect.getRectParameter();
	std::cout << area << std::endl;
	std::cout << perimeter << std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
