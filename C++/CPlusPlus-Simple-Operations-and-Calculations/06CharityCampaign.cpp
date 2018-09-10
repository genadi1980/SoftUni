#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int days, cookers, torts, gofrets, pancakes;
    double charitySum, tortSum, gofretSum, pancakeSum, oneDaySum, campanySum;

    cin >> days >> cookers >> torts >> gofrets >> pancakes;

    tortSum = torts * 45;
    gofretSum = gofrets * 5.80;
    pancakeSum = pancakes * 3.20;

    oneDaySum = (tortSum + gofretSum + pancakeSum) * cookers;
    campanySum = oneDaySum * days;
    charitySum = campanySum - (campanySum / 8);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << charitySum;
}
