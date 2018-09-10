#include <iostream>
#include <math.h>

using namespace std;

int main() {

    double r;
    double pi = 3.14159265359;

    cin >> r;

    double area = pi * pow(r,2);
    double perimeter = 2 * pi * r;

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

         return 0;
}
