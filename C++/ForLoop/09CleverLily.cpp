#include<iostream>
#include<iomanip>
#include<cmath>
#include<map>


using namespace std;

int main() {

    int ageLili = 0, priceToy = 0, counterBro = 0, moneyBD = 0, counter = 0;
    double priceWash = 0, sumEven = 0, sumOdd = 0, sum = 0;

    cin >> ageLili >> priceWash >> priceToy;

    for (int i = 1; i <= ageLili; i++) {
        if(i%2 == 0){
            moneyBD +=10;
            sumEven += moneyBD;
            counter++;
        }
        else {
            sumOdd += priceToy;
        }



    }
    sum = (sumEven + sumOdd - counter);


        if(sum > priceWash){

           cout << fixed << setprecision(2) << "Yes! " << sum - priceWash << endl;
        } else {

        cout << fixed << setprecision(2) << "No! " << priceWash - sum << endl;
        }
    return 0;
}



