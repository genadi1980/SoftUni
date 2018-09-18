#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int time1, time2, time3, sum, seconds, mins;

    cin >> time1 >> time2 >> time3;

    sum = time1 + time2 + time3;

    mins = sum / 60;
    seconds = sum % 60 ;

    cout << mins << ":";
    cout << setfill ('0') << setw (2) << seconds << endl;


    return 0;
}

