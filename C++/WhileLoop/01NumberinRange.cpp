#include<iostream>

using namespace std;

int main() {
    int i;
    cin >> i;

        while(i < 1 || i > 100){
            cout << "Invalid number!" << endl;
            cin >> i;
        }

        cout << "The number is: " << i << endl;

        return 0;

}
