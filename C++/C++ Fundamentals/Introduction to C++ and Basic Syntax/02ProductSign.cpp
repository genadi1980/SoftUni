#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>


using namespace std;

int main() {
        double a, b, c, mul;
        cin >> a >> b >> c;

        mul = a * b * c;
        if (mul >= 0) {
            cout << "+" << endl;
        } else {
            cout << "-" << endl;
        }
        return 0;
}



