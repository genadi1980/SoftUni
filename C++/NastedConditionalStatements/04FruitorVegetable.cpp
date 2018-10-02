
#include<iostream>
#include<string>
#include<iomanip>
#include<map>
using namespace std;

int main() {

    string input;
    cin >> input;

    if (input == "banana" || input == "apple" ||
         input == "kiwi"  || input == "cherry" ||
         input == "lemon" || input == "grapes") {
            cout << "fruit" << endl;
         }
    else if (input == "tomato" || input == "cucumber" ||
         input == "pepper"  || input == "carrot") {
            cout << "vegetable";
         }
    else cout << "unknown" << endl;

    return 0;
}
