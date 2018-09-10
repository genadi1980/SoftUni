#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int length, wide, height;
    double percent;

    cin >> length >> wide >> height >> percent;

    double volume = length * wide * height;
    double liters = volume * 0.001;

    liters = liters - liters * percent / 100;

    cout.setf(ios::fixed);
    cout.precision(3);

    cout << liters << endl;

    return 0;


}
