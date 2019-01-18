#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<array>


using namespace std;

bool CompareArray( int array1[], int lengthArray1, int array2[], int lengthArray2 ){
    bool isEquals = false;

    if( lengthArray1 > lengthArray2 ) {
        isEquals = false;
    }

    else if ( lengthArray1 < lengthArray2 ){
        isEquals = false;
        }
    else if (lengthArray1 == lengthArray2 ) {
                for(int j = 0; j < lengthArray1; j++){
                                if( array1[j] == array2[j] ){
                                    isEquals = true;
                                } else {
                                    isEquals = false;
                                    break;
                                }
                        }
        }
    return isEquals;
}

int main() {

        int sizeArray = 0;
        int numArray = 0;
        cin >> sizeArray;
        bool isEqual = false;

        int numbers[sizeArray];
            for ( int i = 0; i < sizeArray; i++ ){
                int num = 0;
                cin >> num;
                numbers[i] = num;
            }
        cin >> numArray;

            int num[numArray];
            for ( int j = 0; j < numArray; j++ ){
                int num1 = 0;
                cin >> num1;
                num[j] = num1;
            }


             isEqual = CompareArray(numbers, sizeArray, num, numArray);

                if(isEqual) {
                cout << "equal" << endl;
                } else {
                cout << "not equal" << endl;
                }



        return 0;
}



