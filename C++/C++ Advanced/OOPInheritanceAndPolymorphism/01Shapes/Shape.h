#ifndef SHAPE_H

#include "Vector2D.h"

class Shape {
public:
	Shape() : center(Vector2D(0,0)), area(0) {}

	Shape(Vector2D center) : center(center), area(0) {}

	double getArea() const {
		return this->area;
	}

	Vector2D getCenter() const {
		return this->center;
	}

private:
	Vector2D center;
	double area;
};
#define SAPE_H
#endif // !SHAPE_H
