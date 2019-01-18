
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>


using namespace std;

int main() {
        double a =0.0 , b = 0.0, c =0.0, D =0.0;
        double x1=0, x2=0;
        cin >> a >> b >> c;

        D = pow(b,2) - 4*a*c;
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        if (D < 0) {

            cout << "no roots" << endl;

        }
        else if (D == 0) {

            cout << x1 << endl;
        }
        else {
            cout << x1 << " " << x2 << endl;
        }
        return 0;
}


