#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {

    int n = 0, sum1 = 0, sum2 = 0, diff = 0 ;
    cin >> n;
    for( int i = 0; i < n; i++) {

        int num;
        cin >> num;

        sum1 += num;
    }

    for(int i = n; i < 2 * n; i++){
        int num1;
        cin >> num1;

        sum2 += num1;
    }

    if(sum1 == sum2){
        cout << "Yes, sum = " << sum1 << endl;
    }
    else {

        diff = max(sum1, sum2) - min(sum1, sum2);
        cout << "No, diff = " <<  diff << endl;
    }


    return 0;
}



