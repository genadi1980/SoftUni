#include<array>
#include<iostream>
#include<iomanip>

using namespace std;
int main() {

    int n = 0;
    cin >> n;
    int masiv[n];

    for (int i=0; i < n;i++ ) {
            int num = 0;
            cin >> num;

            masiv[i] = num;
        }

    for (int j=0;j<n; j++ ){
        cout << masiv[j] << " ";
        }


    return 0;
}
