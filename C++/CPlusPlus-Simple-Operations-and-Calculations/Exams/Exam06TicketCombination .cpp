#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main () {
        int numberOfCombination;
        int counter = 0;
        cin >> numberOfCombination;

        if (numberOfCombination >= 1 && numberOfCombination <= 10000) {

            for (char nameOfStadium = 'B'; nameOfStadium <= 76; nameOfStadium++) {

                for (char nameOfSector = 'f'; nameOfSector <= 97; nameOfSector--) {

                     for (char entrance = 'A'; entrance <= 67; entrance++) {

                          for (int row = 1; row <= 10; row++) {

                                for (int seat = 10; seat >= 1; seat--) {

                                    if (nameOfStadium % 2 == 0) {

                                        string combination = to_string(nameOfStadium) +
                                        to_string(nameOfSector);
                                    }
                                }
                          }
                     }
                }
            }
        }

        cout << "Ticket combination: " << combination << endl;
        cout << "Prize: " << sum << " lv." << endl;
        return 0;

}

