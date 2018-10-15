
#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <cmath>



using namespace std;
int main() {

    string year;
    // p - брой празници
    // h - брой пъти в които Влади си пътува до родния град.
    // Всички уикенди са 48 в годината
    int p, h, weekends = 48;
    double saturdayGames, holidays,totalGames;
    cin >> year >> p >> h;

    saturdayGames = (weekends - h) * 3/4.0;

    //празнични дни
    holidays = p * 2/3.0;

    totalGames = saturdayGames + h + holidays;

    if(year == "leap") {
        totalGames = totalGames + totalGames*0.15;
    }

    totalGames = floor(totalGames);

    cout << totalGames << endl;



    return 0;
}
