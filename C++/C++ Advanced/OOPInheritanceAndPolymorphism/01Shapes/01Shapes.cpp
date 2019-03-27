// 01Shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#include "Circle.h"
#include "Rectangle.h"
#include "CoordinateSystemCenter.h"

Vector2D readVector() {
	double x, y;
	std::cin >> x >> y;

	return Vector2D(x, y);
}

int main() {
	char shapeType;
	std::cin >> shapeType;

	std::cout << std::fixed << std::setprecision(2);

	if (shapeType == 'c') {
		double radius;
		std::cin >> radius;
		Circle c(radius, readVector());
		std::cout << "Circle at " << (std::string)c.getCenter() << ", area: " << c.getArea() << std::endl;
	}
	else if (shapeType == 'r') {
		double width, height;
		std::cin >> width >> height;
		Rectangle r(width, height, readVector());
		std::cout << "Rectangle at " << (std::string)r.getCenter() << ", area: " << r.getArea() << std::endl;
	}
	else if (shapeType == 'x') {
		CoordinateSystemCenter center;
		std::cout << "Center at " << (std::string)center.getCenter() << ", area: " << center.getArea() << std::endl;
	}
	else {
		std::cout << "unknown shape type" << std::endl;
	}

	return 0;
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
