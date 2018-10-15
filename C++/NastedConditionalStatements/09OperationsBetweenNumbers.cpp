#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <cmath>


using namespace std;

int main() {
    int N1, N2, result;
    double devideResult;
    string sign;
    cin >> N1 >> N2 >> sign;

    if (sign == "+" || sign == "-" || sign == "*") {
            if (sign == "+") result = N1 + N2;
            else if (sign == "-") result = N1 - N2;
            else if (sign == "*") result = N1 * N2;

            cout << N1 << " " << sign << " " << N2 << " = " << result << " - ";
            if (result % 2 == 0) {

            cout << "even" << endl;
            }
            else cout << "odd" << endl;

    }

    else if (sign == "/" || sign == "%" ) {
            if(N2 == 0){
                cout << "Cannot divide " << N1 << " by zero" << endl;
                return 0;
            }
            else if (sign == "/") {
            devideResult = (double) N1 / N2;
                cout << N1 << " " << sign << " " << N2 << " = " << fixed << setprecision(2)<< devideResult << endl;
            }

            else if (sign == "%"){
            devideResult = (int) N1 % N2;
                cout << N1 << " " << sign << " " << N2 << " = " << devideResult << endl;
            }
    }




    return 0;
}

