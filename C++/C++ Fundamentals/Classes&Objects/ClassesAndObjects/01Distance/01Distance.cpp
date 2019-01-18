#include "pch.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Distance {

	int coordX1 = 0;
	int coordY1 = 0;
	int coordX2 = 0;
	int coordY2 = 0;
	double distance = 0;

public:

	Distance(int coordX1 = 0, int coordY1 = 0, int coordX2 = 0, int coordY2 = 0) : 
		coordX1(coordX1), 
		coordX2(coordX2),
		coordY1(coordY1),
		coordY2(coordY2) {
	}

	double CalculateDistance(int coordX1, int coordY1, int coordX2, int coordY2) {
		double p1 = (coordX2 - coordX1);
		double p2 = (coordY2 - coordY1);
		
		distance = sqrt(pow(p1, 2) + pow(p2, 2));

		return distance;
	}
};

int main() {
	Distance distance;
	
	int x1, y1, x2, y2;

	cin >> x1 >> y1;
	cin >> x2 >> y2;
	std::cout << distance.CalculateDistance(x1, y1, x2, y2) << std::endl;
}