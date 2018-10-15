#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
        int  tortWight , tortLength;
        int tortArea;
        int tortLeft;
        string pieces;

        cin >> tortWight >> tortLength;

        tortArea = tortWight * tortLength;
        cin >> pieces;
        while(pieces != "STOP") {

            tortLeft = tortArea - stoi(pieces);
            tortArea = tortLeft;

            if (tortLeft <= 0){
                cout << "No more cake left! You need " << abs(tortLeft) << " pieces more." << endl;
                break;
            }


            cin >> pieces;

        }
        if(pieces == "STOP") cout << tortLeft << " pieces are left." << endl;

    return 0;
}


