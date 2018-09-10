#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double wiskeyPrice, winePrice, rakiaPrice, beerPrice, quantityWiskey, quantityRakia, quantityWine, quantityBeer;
    double rakiaSum, wineSum, beerSum, wiskeySum;
    double totalMoney;

    cin >> wiskeyPrice >> quantityBeer >> quantityWine >> quantityRakia >> quantityWiskey;

    rakiaPrice = wiskeyPrice / 2.0;
    winePrice = rakiaPrice - (rakiaPrice * 40 / 100);
    beerPrice = rakiaPrice - (rakiaPrice * 80 / 100);

    rakiaSum = quantityRakia * rakiaPrice;
    wineSum = quantityWine * winePrice;
    beerSum = quantityBeer * beerPrice;
    wiskeySum = quantityWiskey * wiskeyPrice;

    totalMoney = rakiaSum + wineSum + beerSum + wiskeySum;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << totalMoney;

    return 0;
}
