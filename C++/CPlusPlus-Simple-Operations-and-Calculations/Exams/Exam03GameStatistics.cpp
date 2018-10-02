#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main () {

    int minutes;
    string input = "";

    cin >> minutes;
    cin.ignore(256, '\n');
    getline(cin,input);


    if (minutes == 0) {
        cout << "Match has just began!" << endl;
        return 0;
    }

    else if (minutes < 45) {
        cout << "First half time." << endl;
    }

    else if (minutes >= 45) {
        cout << "Second half time." << endl;
    }

        if(minutes != 0 && minutes <= 10)  {
            cout << input << " missed a penalty." << endl;
            if (minutes % 2 == 0) {
               cout << input << " was injured after the penalty." << endl;
            }

        }

         if (minutes > 10 && minutes <= 35) {
            cout << input << " received yellow card." << endl;
                if (minutes % 2 != 0) {
                    cout << input << " got another yellow card." << endl;
                }
        }

         if (minutes > 35 && minutes < 45) {
            cout << input << " SCORED A GOAL !!!" << endl;
        }

         if (minutes > 45 && minutes <= 55) {
            cout << input << " got a freekick." << endl;
             if (minutes % 2 == 0) {
               cout << input << " missed the freekick." << endl;
            }
        }

         if (minutes > 55 && minutes <= 80) {
            cout << input << " missed a shot from corner." << endl;
            if (minutes % 2 != 0) {
                    cout << input << " has been changed with another player." << endl;
                }
        }

         if (minutes > 80 && minutes <= 90) {
            cout << input << " SCORED A GOAL FROM PENALTY !!!" << endl;
        }

        return 0;
}

