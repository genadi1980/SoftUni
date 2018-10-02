#include <iostream>
#include <cmath>
using namespace std;

int main () {
    double record, distance, swimmingTimePer1m;
    cin >> record >> distance >> swimmingTimePer1m;

    double swimTime = distance * swimmingTimePer1m;
    double delay = (floor(distance / 15) * 12.5);
    double totalTime = swimTime + delay;
    cout.setf(ios::fixed);
    cout.precision(2);

    if (record <= totalTime) {
        double timeNeeded = delay + swimTime - record;
        cout << "No, he failed! He was " << timeNeeded << " seconds slower." << endl;
    }
    else {
        double recordTime = swimTime + delay;
        cout << "Yes, he succeeded! The new world record is " << recordTime << " seconds." << endl;
    }

    return 0;
}
