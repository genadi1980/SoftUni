
#include<iostream>
#include<iomanip>
#include<cmath>
#include<array>
#include<vector>
#include<algorithm>

using namespace std;

void PrintVector (vector<int> arr) {

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";

    }
}


void MaxCounter(vector<int> arr) {

    int maxElement = 0, counter0 = 0, counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0,counter5 = 0,
    counter6 = 0,counter7 = 0,counter8 = 0, counter9 = 0;

    for (int i = 0; i <= arr.size() - 1; i++) {
        if (arr.at(i) == 0) {
            counter0++;
        }
        else if(arr.at(i) == 1 ) {
            counter1++;
        }
        else if(arr.at(i) == 2) {
            counter2++;
        }
         else if(arr.at(i) == 3) {
            counter3++;
        }
         else if(arr.at(i) == 4) {
            counter4++;
        }
         else if(arr.at(i) == 5) {
            counter5++;
        }
         else if(arr.at(i) == 6) {
            counter6++;
        }
         else if(arr.at(i) == 7) {
            counter7++;
        }
         else if(arr.at(i) == 8) {
            counter8++;
        }
         else if(arr.at(i) == 9) {
            counter9++;
        }
    }

    int counters[] = {
        counter0,
        counter1,
        counter2,
        counter3,
        counter4,
        counter5,
        counter6,
        counter7,
        counter8,
        counter9

    };

    cout << max_element(counters, counters + 10) - counters;
}


int main() {

    vector<int> nums;
    int n = 0, maxCounter = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num = 0;
        cin >> num;
        nums.push_back(num);
    }

    MaxCounter(nums);

            return 0;
}


