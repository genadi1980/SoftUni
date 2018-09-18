#include<iostream>
#include<iomanip>
#include<string>


using namespace std;

int main() {

    int hours, minutes;

    cin >> hours >> minutes;

    minutes +=15;

    if(minutes > 59){
        hours++;
        minutes -=60;
    }
    if(hours > 23) {
        hours = 0;
    }
    cout << hours << ":" ;

    cout<< fixed << setw(2) << setfill('0')<< minutes << endl;

    return 0;
}

