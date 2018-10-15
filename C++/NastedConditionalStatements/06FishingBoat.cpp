
#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <cmath>



using namespace std;

int main() {

     double budget, additionalDiscount, totalPrice, moneyLeft, seasonPrice,discount;
     int numberOfHunters;
     string season;

     cin >> budget >> season >> numberOfHunters;

     map<string,double> priceOfBoat;

     priceOfBoat["Spring"] = 3000.0;
     priceOfBoat["Summer"] = 4200.0;
     priceOfBoat["Autumn"] = 4200.0;
     priceOfBoat["Winter"] = 2600.0;

        seasonPrice = priceOfBoat.at(season);
     if(numberOfHunters <= 6) {
            discount = (double) seasonPrice * 10 / 100.0;
     }
     else if(numberOfHunters >= 7 && numberOfHunters <= 11) {
        discount = (double) seasonPrice * 15 / 100.0;
     }
     else if(numberOfHunters >= 12) {
        discount = (double) seasonPrice * 25 / 100.0;
     }

        totalPrice = (double) seasonPrice - discount;

     if(numberOfHunters % 2 == 0 && season != "Autumn") {
        additionalDiscount = (double) totalPrice * 5 / 100.0;
        totalPrice -= additionalDiscount;
     }

     moneyLeft = max(budget, totalPrice) - min(budget, totalPrice);

        cout.setf(ios::fixed);
        cout.precision(2);

     if (budget >= totalPrice){
        cout<< "Yes! You have " << moneyLeft << " leva left." << endl;
     }
     else {
        cout << "Not enough money! You need "<< moneyLeft << " leva." << endl;
     }

    return 0;
}
