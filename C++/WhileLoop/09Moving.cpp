#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    string input;

   int wight, length, heigh;
   int volumeBox = 1;
   int volumeBoxs =0;
   cin >> wight >> length >> heigh;

   int volumeSpace = wight * length * heigh;
    cin.ignore();
   getline(cin,input);
   while (input != "Done"){
        int numberOfBoxes;
        volumeBoxs += stoi(input);
        if(volumeBoxs >= volumeSpace) break;
    getline(cin,input);
   }

   if (volumeBoxs > volumeSpace){
    cout << "No more free space! You need " << volumeBoxs - volumeSpace << " Cubic meters more." << endl;
   } else {
    cout << volumeSpace - volumeBoxs << " Cubic meters left.";
   }
    return 0;
}


