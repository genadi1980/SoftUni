
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>


using namespace std;

int main() {

        int a = 0;
        int min = INT_MAX;
        int max = INT_MIN;
        int input = 0;
        cin >> a;

        for (int i=1;i<=a ;i++ ){
                cin >> input;
                if (input > max) {
                    max = input;
                }
                if (input < min) {
                    min = input;
                }

        }

        cout << min << " " << max << endl;

        return 0;
}


