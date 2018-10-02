#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>


using namespace std;

int main() {

   double steps, dancers, days;
   double percent, stepsPerDay;

   cin >> steps >> dancers >> days;

   stepsPerDay = ((steps / days) / steps) * 100.0;
   stepsPerDay = ceil(stepsPerDay);
   percent = stepsPerDay / dancers;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (stepsPerDay <= 13) {
        cout << "Yes, they will succeed in that goal! " << percent << "%." <<endl;
    }
    else {
        cout << "No, They will not succeed in that goal! Required " << percent << "% steps to be learned per day." << endl;
    }

    return 0;
}

