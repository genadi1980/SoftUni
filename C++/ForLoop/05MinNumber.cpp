#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {

    int n = 0, MINNUM = INT_MAX;
    cin >> n;
    for( int i = 0; i < n; i++) {

        int num;

        cin >> num;
        if (num < MINNUM){
            MINNUM = num;
        }
    }

    cout << MINNUM << endl;

    return 0;
}




