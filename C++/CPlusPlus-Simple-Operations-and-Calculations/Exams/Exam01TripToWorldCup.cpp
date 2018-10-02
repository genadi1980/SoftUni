#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main () {
        double gameSum, sumDiscount, departurePrice, arrivalPrice, ticketPrice, totalSum, sumPerFriend, sumPlane;
        int numberGames, percentDiscount;

        cin >> departurePrice >> arrivalPrice >> ticketPrice >> numberGames >> percentDiscount;

        sumPlane = 6 * (departurePrice + arrivalPrice);

        sumDiscount = sumPlane - (sumPlane * percentDiscount / 100);

        gameSum = 6 * ticketPrice * numberGames;

        totalSum = gameSum + sumDiscount;

        sumPerFriend = totalSum / 6;

        cout.setf(ios::fixed);
        cout.precision(2);

        cout << "Total sum: " << totalSum << " lv." << endl;
        cout << "Each friend has to pay " << sumPerFriend << " lv." << endl;


        return 0;
}
