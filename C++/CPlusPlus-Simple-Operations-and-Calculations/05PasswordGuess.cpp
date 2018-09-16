#include <iostream>

using namespace std;

int main() {

    string password = "s3cr3t!P@ssw0rd";
    string inputPass;
    cin >> inputPass;

    if( inputPass == password) {
        cout << "Welcome" << endl;
    }
    else cout << "Wrong password!" << endl;

    return 0;
}
