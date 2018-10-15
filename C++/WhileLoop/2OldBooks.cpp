
#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    string bookName, bookList;
    int capacity, counter = 0;
    bool isFound = false;
    getline(cin, bookName);
    cin >> capacity;
    cin.ignore();
    getline(cin, bookList);
    while (counter < capacity){
        if (bookName == bookList) {
            isFound = true;
            break;
        }
            counter++;

    getline(cin, bookList);
    }
    if(isFound) {
        cout << "You checked " << counter << " books and found it." << endl;
    }
    else {
        cout << "The book you search is not here!" << endl;
        cout << "You checked " << counter << " books." << endl;
    }

    return 0;
}


