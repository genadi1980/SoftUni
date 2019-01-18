#include <iostream>
#include <cmath>
#include <vector>


using namespace std;

int Product (int arr[], int n){
    int sum = 0;
    int minValue = INT_MAX;

    for (int j = 0;j < n; j++)
       {
           for (int i = 0;i < n ; i++)
           {
               if ( j != i){

                       sum = abs(arr[j] - arr[i]);
                      if(sum <= minValue) {
                        minValue = sum;
                }
              }
           }

       }

        return minValue;
}

int main(){

    int n, difference = 0;
    cin >> n;
    int myArray[n];

    for (int i = 0;i < n;i++ )
    {

       cin >> myArray[i];



    }
    difference = Product(myArray, n);

    if(n!=1 && n!=0){
        cout << difference << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
