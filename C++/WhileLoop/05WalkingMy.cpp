#include<iostream>
#include<string>


using namespace std;

int main() {
    string stepsAsStr;
    long sum = 0;

    getline(cin, stepsAsStr);;
    while (true) {

            if (stepsAsStr == "Going home") {
                getline(cin, stepsAsStr);
                long number;
                number = stoi(stepsAsStr);
                long leftSteps;
                leftSteps = 10000 - (sum += number);

                    if(leftSteps >= 0) {
                    cout << leftSteps << " more steps to reach goal." << endl;
                    break;
                    }
                    else {
                        cout << "Goal reached! Good job!" << endl;
                    break;
                    }
            }

            sum +=  stoi(stepsAsStr);
                if(sum >= 10000) {
                cout << "Goal reached! Good job!" << endl;
                break;
                    }

        getline(cin, stepsAsStr);
    }
    return 0;
 }
