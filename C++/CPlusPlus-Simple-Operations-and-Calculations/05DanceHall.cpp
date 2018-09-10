#include <iostream>\
#include <cmath>

using namespace std;

int main() {

    double length, wide, side, hallArea, sideArea, peikaArea, freeArea;
    int dancers;
    cin >> length >> wide >> side;

    hallArea = (length * 100) * (wide * 100);
    sideArea = (side * 100)*(side*100);
    peikaArea = hallArea / 10;
    freeArea = hallArea - sideArea - peikaArea;

    dancers = freeArea / (40 + 7000);


    cout << dancers;


    return 0;
}
