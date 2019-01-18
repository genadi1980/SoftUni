
#include<iostream>
#include<iomanip>
#include<cmath>
#include<array>
#include<vector>

using namespace std;

void PrintVector (vector<int> arr) {

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";

    }
}

int SumVector(vector<int> arr) {
        int sum = 0;
        for(int i = 0; i <= arr.size() - 1; i++) {
             sum += arr.at(i);
        }

        return sum;
}

int main() {
    vector<int> nums;
    int sum = 0;
    int average = 0;
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int num = 0;
        cin >> num;
        nums.push_back(num);
    }

        sum = SumVector(nums);
        average = (double) sum / nums.size();

        for(int i=0; i < nums.size(); i++) {
            if (nums.at(i) >= average ){
                cout << nums.at(i) << " ";
            }
        }


            return 0;
}


