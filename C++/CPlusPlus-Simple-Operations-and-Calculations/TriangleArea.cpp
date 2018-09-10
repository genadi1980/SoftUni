#include <iostream>

using namespace std;

int main() {
    double side, height;
    cin >> side >> height;
    double area = side * height / 2;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << area;

    return 0;
}
