#include <iostream>
#include <iomanip>
#include <map>
#include <string>


using namespace std;
int main()
{
    double budget, numberOfFans, leftBudget, ticketPrice, leftMoney;
    string category;
    cin >> budget >> category >> numberOfFans;

    if( numberOfFans >= 1 && numberOfFans <= 4) leftBudget = budget - budget * 0.75;
    else if( numberOfFans > 4 && numberOfFans <= 9) leftBudget = budget - budget * 0.60;
    else if( numberOfFans > 9 && numberOfFans <= 24) leftBudget = budget - budget * 0.50;
    else if( numberOfFans > 24 && numberOfFans <= 49) leftBudget = budget - budget * 0.40;
    else if( numberOfFans >= 50) leftBudget = budget - budget * 0.25;

    if(category == "Normal") {ticketPrice = 249.99 * numberOfFans;}
    else if (category == "VIP") {ticketPrice = 499.99 * numberOfFans;}

    leftMoney = max(leftBudget, ticketPrice) - min(leftBudget, ticketPrice);

    cout.setf(ios::fixed);
    cout.precision(2);

    if (leftBudget >= ticketPrice) {
        cout << "Yes! You have " << leftMoney << " leva left." << endl;
    }
    else {
        cout << "Not enough money! You need " << leftMoney << " leva." << endl;
    }
    return 0;
}
