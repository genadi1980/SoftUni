#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int tableNumber;
    double tableLength, tableWide, tableCover, tableCare;
    double priceUSD, priceBGN;

    cin >> tableNumber >> tableLength >> tableWide;

    tableCover = tableNumber * (tableLength + 2*0.30)*(tableWide + 2*0.30);
    tableCare = tableNumber * (tableLength / 2) * (tableLength / 2);

    priceUSD = tableCover * 7 + tableCare * 9;
    priceBGN = priceUSD * 1.85;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << priceUSD << " USD" << endl;
    cout << priceBGN << " BGN" << endl;

    return 0;
}
