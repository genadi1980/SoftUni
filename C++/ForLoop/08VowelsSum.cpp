#include<iostream>
#include<iomanip>
#include<cmath>
#include<map>


using namespace std;

int main() {

    string input;
    int sum = 0;
    map<char, int> vowels;

    vowels['a'] = 1;
    vowels['e'] = 2;
    vowels['i'] = 3;
    vowels['o'] = 4;
    vowels['u'] = 5;

    getline(cin, input);

    for(int i = 0; i < input.length(); i++) {
        sum += vowels[input[i]];
    }

    cout << sum << endl;


    return 0;
}



