#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    string input;
    int easy = 50, medium = 100, hard = 200;
    int glassVolume = 0, counter = 0;
    int fillOutGlass = 0;

    cin >> glassVolume;
    cin >> input;

    while(fillOutGlass <= glassVolume){
        if(input == "Easy") fillOutGlass += easy;
        else if(input == "Medium") fillOutGlass += medium;
        else if(input == "Hard") fillOutGlass += hard;
        counter++;
        if(fillOutGlass >= glassVolume) break;

        cin >> input;
    }

    if( fillOutGlass <= glassVolume){
        cout << "The dispenser has been tapped " << counter << " times." << endl;
    } else {
        cout << fillOutGlass - glassVolume << "ml has been spilled." << endl;
    }
    return 0;
}


