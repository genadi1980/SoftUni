#include<iostream>

using namespace std;

int main() {
    int stepsLimit = 10000;
    string input;

    getline(cin, input);

    while( input != "Going home"){
        int steps += stoi(input);
        if(steps >= stepsLimit){
            break;
        }
        getline(cin, input);
    }
    if(input == "Going home"){
        getline(cin, input)
        steps += stoi(input)
    }

    if(steps >= stepsLimit) {
        cout << "Goal reached! Good job!" << endl;
    } else {
        cout << stepsLimit - steps << " more steps to reach goal." << endl;
    }
    return 0;
}
