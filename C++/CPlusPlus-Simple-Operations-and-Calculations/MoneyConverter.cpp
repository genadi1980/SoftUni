#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    double lv = 1;
    double us = 1.79549;
    double eu = 1.95583;
    double gb = 2.53405;

    string BGN = "BGN";
    string USD = "USD";
    string EUR = "EUR";
    string GBP = "GBP";

    string input_money;
    string output_money;
    double amount;

    cin >> amount;
    cin >> input_money;

    if(input_money == BGN){
        amount = amount * lv;
    }
    else if (input_money == USD) {
        amount = amount * us;
    }

    else if (input_money == EUR){
        amount = amount * eu;
    }

    else if (input_money == GBP) {
        amount = amount * gb;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cin >> output_money;

    if(output_money == BGN){
        amount = amount / lv;
        cout << amount << " BGN" << endl;
    }

    else if(output_money == USD) {
        amount = amount / us;
        cout << amount << " USD" << endl;
    }

    else if(output_money == EUR){
        amount = amount / eu;
        cout << amount << " EUR" << endl;
    }

    else if(output_money == GBP) {
        amount = amount / gb;
        cout << amount << " GBP" << endl;
    }
    return 0;
}
