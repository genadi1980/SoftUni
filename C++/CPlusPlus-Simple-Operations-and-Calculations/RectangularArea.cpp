#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double x1, y1, x2, y2;
    double perimeter, area;
    cin >> x1 >> y1 >> x2 >> y2;

    double sideA, sideB;
    sideA = max(x1,x2) - min(x1,x2);
    sideB = max(y1,y2) - min(y1,y2);

    area = sideA * sideB;
    perimeter = 2 * (sideA + sideB);

    cout << area << endl;
    cout << perimeter << endl;

    return 0;
}
