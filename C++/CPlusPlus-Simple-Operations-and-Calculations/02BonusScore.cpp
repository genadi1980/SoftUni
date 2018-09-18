#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int number;

    cin >> number;

    double bonusPoints, sum, totalNum;

    if( number <= 100) {
        bonusPoints = 5;

    }

    else if (number > 100 && number <= 1000) {
        bonusPoints = 20 * number / 100.0;
    }

    else if (number > 1000) {
        bonusPoints = 10 * number / 100.0;
    }

    if (number % 2 == 0) {
        bonusPoints++;
    }

    if (number % 10 == 5){
        bonusPoints += 2;
    }


    totalNum = number + bonusPoints;
//    cout.setf(ios::fixed);
//    cout.precision(2);

    cout << bonusPoints << endl;
    cout << totalNum << endl;

    return 0;
 }


