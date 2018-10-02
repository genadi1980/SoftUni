#include<iostream>
#include<string>
#include<iomanip>
#include<map>
using namespace std;

int main() {

   int input;
    cin >> input;

    if( input != 0) {
       if(input < 100 || input > 200) {
         cout << "invalid" << endl;
       }
    }

    return 0;
}

