
#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>


using namespace std;

int main() {
    double A, B, C, D, totalTime, timeLeft;

    cin >> A >> B >> C >> D;

    totalTime = 1 / (1/A + 1/B + 1/C);

    totalTime+= totalTime * 15/100;

    timeLeft = D - totalTime;


    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Cleaning time: " << totalTime << endl;
    cout.precision(0);
    if(timeLeft > 0){
        timeLeft = floor(timeLeft);
        cout << "Yes, there is a surprise - time left -> " << timeLeft << " hours." << endl;
    }
    else {
        timeLeft = abs(timeLeft);
        timeLeft = ceil(timeLeft);
        cout << "No, there isn't a surprise - shortage of time -> " << timeLeft << " hours." << endl;
    }

    return 0;
}
