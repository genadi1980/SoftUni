#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <cmath>


using namespace std;

int main() {
    string month;
    int nights;
    double apartmentPrice, studioPrice, totalApartmentPrice, totalStudioPrice;

    cin >> month >> nights;


    if (month == "May" || month == "October") {
        apartmentPrice = 65;
        studioPrice = 50;

        if ( nights > 7 && nights <= 14) {
            studioPrice -= (double) studioPrice * 5 / 100;
        }

        if ( nights > 14) {
            studioPrice -= (double) studioPrice * 30 / 100;
        }

    }
    else if (month == "June" || month == "September") {
        apartmentPrice = 68.70;
        studioPrice = 75.20;

        if ( nights > 14) {
            studioPrice -= (double) studioPrice * 20 / 100;
        }

    }

    else if (month == "July" || month == "August") {
        apartmentPrice = 77.00;
        studioPrice = 76.00;

    }

    if (nights > 14) {
        apartmentPrice -= (double) apartmentPrice * 10 / 100;
    }

    totalApartmentPrice = apartmentPrice * nights;
    totalStudioPrice = studioPrice * nights;

    cout << fixed << setprecision(2) << "Apartment: " << totalApartmentPrice << " lv." << endl;
    cout << fixed << setprecision(2) << "Studio: " << totalStudioPrice << " lv." << endl;
    return 0;
}

