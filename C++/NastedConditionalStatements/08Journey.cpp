#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <cmath>



using namespace std;

int main() {
     string season;
     double budget, moneySpent;

     cin >> budget >> season;

     cout.setf(ios::fixed);
     cout.precision(2);

     if ( budget <= 100){
        cout << "Somewhere in Bulgaria" << endl;
        if(season == "summer") {
            moneySpent = budget * 30 / 100.0;
            cout << "Camp - " << moneySpent << endl;
        }
        else if (season == "winter") {
            moneySpent = budget * 70 / 100.0;
            cout << "Hotel - " << moneySpent << endl;
        }
     }
     else if(budget >100 && budget <= 1000) {
        cout << "Somewhere in Balkans" << endl;
        if(season == "summer") {
            moneySpent = budget * 40 / 100.0;
            cout << "Camp - " << moneySpent << endl;
        }
        else if (season == "winter") {
            moneySpent = budget * 80 / 100.0;
            cout << "Hotel - " << moneySpent << endl;
        }
     }
     else {
        cout << "Somewhere in Europe" << endl;
        moneySpent = budget * 90 / 100.0;
            cout << "Hotel - " << moneySpent << endl;
     }



    return 0;
}

