#include<iostream>
#include<string>
#include<iomanip>
#include<map>
using namespace std;

int main() {

    double x1, y1, x2, y2, x, y;

    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;

    if(x >= x1 && x <= x2 && y >= y1 && y <= y2) {

        cout << "Inside" << endl;
    }
    else {
        cout << "Outside" << endl;
    }


    return 0;
}

