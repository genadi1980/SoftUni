#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {

    int n = 0, MAXNUM = INT_MIN;
    cin >> n;
    for( int i = 0; i < n; i++) {

        int num;

        cin >> num;
        if (num > MAXNUM){
            MAXNUM = num;
        }
    }

    cout << MAXNUM << endl;

    return 0;
}


