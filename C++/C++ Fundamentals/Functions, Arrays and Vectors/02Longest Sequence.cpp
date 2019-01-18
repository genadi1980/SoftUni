#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<array>
#include<vector>

using namespace std;



void PrintNumbers (int arr[], int l) {

    for(int i=0; i<l; i++) {
        cout << arr[i] << " ";

    }
}

void PrintVector (vector<int> arr) {

    for(int i=0; i<arr.size()-1; i++) {
        cout << arr[i] << " ";

    }
}

int CountSequence(int arr[], int l){
    int Sequence = 0;
    int counter = 0;

    for(int i=0; i<l; i++) {
            int a = arr[i];
            int b = arr[i+1];
            if(a == b) {
                Sequence = a;
                counter++;
                i++;

                } else {
                    counter = 1;
                }



    }
        cout << Sequence << " ";

    for (int j = 0; j<counter; j++) {
        cout << Sequence << " ";
    }
}


int main() {
        int lenghtArray = 0;
            cin >> lenghtArray;
        int numbers[lenghtArray];
        for (int i=0; i<lenghtArray;i++ ){
                int num = 0;
                cin >> num;
                numbers[i] = num;
        }

            CountSequence(numbers, lenghtArray);

            return 0;
}


