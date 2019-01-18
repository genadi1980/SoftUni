#include<iostream>
#include<iomanip>
#include<cmath>
#include<array>
#include<vector>
#include<algorithm>

using namespace std;

void MaxCounter(vector<int> arr) {

    int maxCount = 0;
    int repeatingNumber = 0;

    for (int i = 0;i < arr.size();i++ ){
        int currentCount = 0;

        for (int j = i;j < arr.size(); j++ ) {
                if(arr.at(i) == arr.at(j)) {
                    currentCount++;
                }
        }

        if(currentCount > maxCount){
            repeatingNumber = arr.at(i);
            maxCount = currentCount;
        }
    }

    cout << repeatingNumber << endl;
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


