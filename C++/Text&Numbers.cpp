#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName = "Maria";
    string lastName = "Ivanova";
    int age;
    string town;

    cin >> firstName >> lastName >> age >> town;
    cout << "You are " << firstName << " " << lastName << ", a " << age << "-years old person from " << town << "." << endl;

    return 0;
}
