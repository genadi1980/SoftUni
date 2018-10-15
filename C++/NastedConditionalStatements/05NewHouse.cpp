
#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <cmath>



using namespace std;

int main() {

    int numberOfFlowers;
    string typeFlowers;
    double priceOfFlowers, totalPrice, discount, leftMoney,budget;

    cin >> typeFlowers >> numberOfFlowers >> budget;

    map<string, double> flowers;

    flowers["Roses"] = 5.0;
    flowers["Dahlias"] = 3.80;
    flowers["Tulips"] = 2.80;
    flowers["Narcissus"] = 3.0;
    flowers["Gladiolus"] = 2.50;

    //priceOfFlowers = flowers.at(typeFlowers);
    totalPrice = (double) numberOfFlowers * flowers.at(typeFlowers);

    if (numberOfFlowers > 80 && typeFlowers == "Roses") {
        discount = (double)totalPrice * 10 / 100.0;
        totalPrice -= discount;
    }
    else if ( numberOfFlowers > 90 && typeFlowers == "Dahlias") {
        discount = (double) totalPrice * 15 / 100.0;
                totalPrice -= discount;

    }

    else if ( numberOfFlowers > 80 && typeFlowers == "Tulips") {
        discount = (double) totalPrice * 15 / 100.0;
                totalPrice -= discount;
    }

    else if (numberOfFlowers < 120 && typeFlowers == "Narcissus") {
        discount = (double) totalPrice * 15 / 100.0;
                totalPrice += discount;

    }
    else if (numberOfFlowers < 80 && typeFlowers == "Gladiolus") {
        discount = (double) totalPrice * 20 / 100.0;
                totalPrice += discount;

    }

    leftMoney = max(budget, totalPrice) - min(budget,totalPrice);

    cout.setf(ios::fixed);

    if ( budget >= totalPrice) {
        cout << "Hey, you have a great garden with "<< numberOfFlowers<< " " << typeFlowers << " and " << setprecision(2)<< leftMoney <<" leva left." << endl;
    }
    else {
    cout << "Not enough money, you need " << setprecision(2)<< leftMoney <<" leva more." << endl;
    }
    return 0;
}
