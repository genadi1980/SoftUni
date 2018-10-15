
#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <cmath>



using namespace std;

int main() {
    int examH, examM, arrivalH, arrivalM, sumH, sumM;
    double sumExamTime, sumArrivaTime, sumTime;
    cin >> examH >> examM >> arrivalH >> arrivalM;

    sumExamTime = examH * 60 + examM;
    sumArrivaTime = arrivalH * 60 + arrivalM;

    sumTime = sumExamTime - sumArrivaTime;

    sumH = (int) sumTime / 60;
    sumM = (int) sumTime % 60;

    if (sumH == 0) {
            if (sumM == 0) {
            cout << "On time" << endl;
            }
        else if (sumM > 0 && sumM <= 30){
            cout << "On time" << endl;
            cout << sumM <<" minutes before the start" << endl;
        }
        else if (sumM > 30) {
            cout << "Early" << endl;
            cout << sumM <<" minutes before the start" << endl;
        }
        else if (sumM < 0) {
            sumM = abs(sumM);
            cout << "Late" << endl;
            cout << sumM <<" minutes after the start" << endl;
        }

    }
    else if (sumH != 0) {
            sumH = abs(sumH);
            sumM = abs(sumM);
            if (arrivalH > examH) {
            cout << "Late" << endl;
            cout << sumH << ":" << setfill('0') << setw(2) << sumM <<" hours after the start" << endl;
        }

        else if ( arrivalH < examH) {
            cout << "Early" << endl;
            cout << setfill('0') << sumH << ":" << setfill('0') << setw(2) << sumM <<" hours before the start" << endl;
        }
    }


    return 0;
}
