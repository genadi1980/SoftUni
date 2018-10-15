#include <iostream>
#include <iomanip>
#include <map>
#include <string>


using namespace std;
int main() {

    double rows, colums, audience, ticketPrice, income;
    string typeMovie;

    cin >> typeMovie >> rows >> colums;

    audience = rows * colums;

    if ( typeMovie == "Premiere") ticketPrice = 12.00;
    else if ( typeMovie == "Normal") ticketPrice = 7.50;
    else if ( typeMovie == "Discount") ticketPrice = 5.00;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << (income = audience * ticketPrice) << " leva"<< endl;
    return 0;
}

