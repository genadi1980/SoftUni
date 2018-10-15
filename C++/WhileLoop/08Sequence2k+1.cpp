#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    int num = 1;
    int n;
    cin >> n;
    cout << num << endl;

    while(num <= n) {
         num = 2*num + 1;
         if(num > n) break;
        cout << num << endl;
        if(num == n) break;
    }

    return 0;
}


