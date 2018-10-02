
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main () {

        int sectors, capacity;
        double ticketPrice, profit, charity, profitPerSector;

        cin >> sectors >> capacity >> ticketPrice;

        profit = capacity * ticketPrice;

        profitPerSector = capacity * ticketPrice / sectors;

        charity = ( profit - (profitPerSector * 75 / 100)) / 8;

        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Total income - " << profit << " BGN" << endl;
        cout << "Money for charity - " << charity <<" BGN" << endl;

        return 0;
}
