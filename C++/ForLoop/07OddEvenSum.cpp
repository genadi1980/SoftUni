#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {

    int sumEven = 0, sumOdd = 0, diff = 0;
    int n = 0;
    cin >> n ;

    for( int i = 0; i < n; i++){
        int num = 0;
        cin >> num;

        if (i%2 == 0){
            sumEven += num;
        }
        else {
            sumOdd += num;
        }
    }

    if (sumEven == sumOdd) {
        cout << "Yes Sum = " << sumEven << endl;

    } else {
         diff = abs(sumEven - sumOdd);
        cout << "No Diff = " << diff << endl;
    }


    return 0;
}



