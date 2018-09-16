#include<iostream>

using namespace std;

int main() {

    string figure;
    double area;
    cin >> figure;

    if ( figure == "square") {
      double side;
      cin >> side;
      area = side * side;

    }
    else if (figure == "rectangle") {
      double sideA;
      double sideB;

      cin >> sideA;
      cin >> sideB;

      area = sideA * sideB;
    }
    else if(figure == "circle"){
      double radius;
      double pi = 3.14159265359;
      cin >> radius;
      area = pi * radius * radius;
    }
    else if(figure == "triangle"){
      double side, height;
      cin >> side;
      cin >> height;

      area = side * height / 2;

    }

    cout.setf(ios::fixed);
    cout.precision(3);

    cout << area << endl;

    return 0;
}
