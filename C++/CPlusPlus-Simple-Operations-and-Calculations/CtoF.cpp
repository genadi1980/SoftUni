#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double radians, graduses, pi = 3.14159265359;

    cin >> radians;

    graduses = radians * 180 / pi;


    cout << round(graduses) << endl;



}
