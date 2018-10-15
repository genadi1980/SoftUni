#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    double input, accountBalance;
    int inputNum, i = 0;
    cin >> inputNum;
    cin >> input;

    while(input >= 0) {
//            if(inputNum == 0){
//                break;
//            }

        accountBalance += input;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Increase: " << input << endl;
        i++;
        if(i == inputNum)
        {
            break;
        }
        cin >> input;


    }
    if(input < 0){
        cout << "Invalid operation!" << endl;
    }
    cout << "Total: " << accountBalance << endl;

    return 0;
}

