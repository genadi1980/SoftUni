#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main () {
        string name = "";
        cin >> name;

        double sumMoney, totalSum, countBeer, countChips, priceOfChips, moneyNeeded, moneyLeft, sumBeer, sumChips;
        cin >> sumMoney >> countBeer >> countChips;

        sumBeer = countBeer * 1.20;

        priceOfChips = 45 * sumBeer / 100;

        sumChips = ceil(priceOfChips * countChips);

        totalSum = sumChips + sumBeer;

        cout.setf(ios::fixed);
        cout.precision(2);

        if (totalSum <= sumMoney) {
                moneyLeft = sumMoney - totalSum;
        cout << name << " bought a snack and has " << moneyLeft << " leva left." << endl;
        }

        else {
                moneyNeeded = totalSum - sumMoney;
            cout << name << " needs " << moneyNeeded << " more leva!" << endl;
        }
        return 0;
}

