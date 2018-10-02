#include <iostream>
#include <map>
#include <string>


using namespace std;
int main()
{
    string input;
    cin >> input;

    if (input == "dog") {
         cout << "mammal" << endl;
    }
    else if ( input == "crocodile" || input == "tortoise" || input == "snake" ) {
        cout << "reptile" << endl;
    }
        else cout << "unknown" << endl;

    return 0;
}

