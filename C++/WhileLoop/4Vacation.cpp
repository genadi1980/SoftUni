#include<iostream>
#include<iomanip>
#include<iomanip>

using namespace std;

int main() {
    double moneyNeeded, moneyAvailable, moneySavedOrSpend;
    int counter = 0, days = 0;
    cin >> moneyNeeded >> moneyAvailable;


    while(!(moneyAvailable > moneyNeeded)) {
          cin.ignore();
            string action;
            getline(cin, action);
            cin >> moneySavedOrSpend;
            days++;


        if (action == "spend") {
                counter++;
            if (counter >= 5) {
                cout << "You can't save the money." << endl;
                cout << days << endl;
                break;
            } else {
            moneyAvailable -= moneySavedOrSpend;
            if(moneyAvailable < moneySavedOrSpend) {
                moneyAvailable = 0;
            }
            }
        }
        else if (action == "save") {
                counter = 0;
            moneyAvailable += moneySavedOrSpend;

        if(moneyAvailable >= moneyNeeded) {
                 break;
            }

        }

    }

    if (moneyAvailable >= moneyNeeded) {
             cout << "You saved the money for " << days << " days." << endl;
    }
    return 0;
}



