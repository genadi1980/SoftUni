#include <iostream>

using namespace std;

int main() {

    int number1, number2, number3;
    cin >> number1 >> number2 >> number3;

    if(number1 == number2 && number2 == number3) {
        cout << "yes" << endl;
    }
    else cout << "no";

    return 0;
}
