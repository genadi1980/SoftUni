#include<iostream>

using namespace std;

int main() {

    double priceExcursion, moneyLeft, moneyDiff, sum, priceDiscount, rent, profit;
    int puzzels, dolls, bears, minions, trucks, toysNumber;

    cin >> priceExcursion >> puzzels >> dolls >> bears >> minions >> trucks;

    sum = puzzels * 2.60 + dolls * 3 + bears * 4.10 + minions * 8.20 + trucks * 2;

    toysNumber = puzzels + dolls + bears + minions + trucks;

    if(toysNumber > 50) {
        sum = sum - sum * 25 /100;
    }

    rent = sum * 10 / 100;
    profit = sum - rent;


    cout.setf(ios::fixed);
    cout.precision(2);

    if (profit >= priceExcursion){
            moneyLeft = profit - priceExcursion;
        cout <<  "Yes! " << moneyLeft << " lv left." << endl;
    }
    else {
        moneyDiff = priceExcursion - profit;
        cout << "Not enough money! " << moneyDiff << " lv needed." << endl;
    }


    return 0;
}

