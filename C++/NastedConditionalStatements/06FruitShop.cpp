#include <iostream>
#include <map>
using namespace std;
int main(void)
{
    string fruit, day;
    double quantity;

    cin >> fruit >> day >> quantity;

    map <string, double>  dailyPrice;
    map <string, double>  weekendPrice;

    dailyPrice["banana"] = 2.50;
    dailyPrice["apple"] = 1.20;
    dailyPrice["orange"] = 0.85;
    dailyPrice["grapefruit"] = 1.45;
    dailyPrice["kiwi"] = 2.70;
    dailyPrice["pineapple"] = 5.50;
    dailyPrice["grapes"] = 3.85;

    weekendPrice["banana"] = 2.70;
    weekendPrice["apple"] = 1.25;
    weekendPrice["orange"] = 0.90;
    weekendPrice["grapefruit"] = 1.60;
    weekendPrice["kiwi"] = 3.00;
    weekendPrice["pineapple"] = 5.60;
    weekendPrice["grapes"] = 4.20;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (fruit == "banana" || fruit == "apple" || fruit == "orange" ||
        fruit == "grapefruit" || fruit == "kiwi" || fruit == "pineapple" ||
        fruit == "grapes") {
            double price1 = quantity * dailyPrice[fruit];
            double price2 = quantity * weekendPrice[fruit];
            if (day == "Monday" || day == "Tuesday" || day == "Wednesday" ||
                day == "Thursday" || day == "Friday") {
                    cout << price1 << endl;
                }
            else if (day == "Saturday" || day == "Sunday") {
                    cout << price2 << endl;
            }
            else {
                cout << "error" << endl;
            }

        } else {
                cout << "error" << endl;
            }


    return 0;
}
