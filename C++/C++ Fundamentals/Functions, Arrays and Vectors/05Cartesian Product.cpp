#include <iostream>
#include <cmath>
#include <vector>


using namespace std;

void Multiply (int arr[], int n){
    int sum = 0;

    for (int j = 0;j < n; j++)
       {
           for (int i = 0;i < n ; i++)
           {
               sum = arr[j] * arr[i];
              cout << sum << " ";
           }



       }

}

int main(){

    int n, sum = 0, curNum;
    cin >> n;
    int myArray[n];

    for (int i = 0;i < n;i++ )
    {

       cin >> myArray[i];



    }
    Multiply(myArray, n);

    return 0;
}
