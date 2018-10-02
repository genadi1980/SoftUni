#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main() {

    double age; cin >> age;
    string gender; cin >> gender;

    if (age < 16) {
        if (gender == "m") cout << "Master" << endl;
        else if (gender == "f") cout << "Miss" << endl;
    } else {
        if (gender == "m") cout << "Mr." << endl;
        else if (gender == "f") cout << "Ms." << endl;
        }

    return 0;
}
