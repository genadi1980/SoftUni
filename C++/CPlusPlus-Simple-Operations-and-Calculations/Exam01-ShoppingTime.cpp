#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {

     double restTime;
     double coffeeTime = 5.0;
     double partTime = 3 * 2;
     double programTime = 2 * 2;
     double partPrice, programPrice, coffeePrice;
     double partMoney, programMoney, spentMoney, timeForRelax;

     cin >> restTime >> partPrice >> programPrice >> coffeePrice;

     timeForRelax = restTime - partTime - programTime - coffeeTime;

     partMoney = 3 * partPrice;

     programMoney = 2 * programPrice;

     spentMoney = partMoney + programMoney + coffeePrice;

     cout.setf(ios::fixed);
     cout.precision(2);



     cout << spentMoney << endl;

     cout << setw(0) << setprecision(0) << timeForRelax << endl;

    return 0;
}
