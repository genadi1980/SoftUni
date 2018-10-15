#include<iostream>
#include<iomanip>

using namespace std;

int gcd (int a,int b) {

    while(a != b) {
        if (a > b){
            a = a - b;
        } else {
        b = b - a;
        }

    }

    return a;
}


int main() {

   int a = 0, b = 0;
   int gcdnum;
   cin >> a >> b;
   gcdnum = gcd (a, b);

   cout << gcdnum << endl;

    return 0;
}



