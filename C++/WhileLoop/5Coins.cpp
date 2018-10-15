#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
      double coins, lv, moneti, br = 0;

      cin >> coins;

      lv = floor(coins);
      moneti = round((coins - lv) * 100);

      while (lv > 0) {

            if (lv >= 2) {
                br += 1;
                lv -= 2;
            }
             if (lv >= 1) {
                br += 1;
                lv -= 1;

            }
      }

      while (moneti > 0) {
            if (moneti >= 50) {

                br += 1;
                moneti -= 50;
            }
            else if ( moneti >= 20) {
                br += 1;
                moneti -= 20;
            }

             else if ( moneti >= 10) {
                br += 1;
                moneti -= 10;
            }

             else if ( moneti >= 05) {
                br += 1;
                moneti -= 05;
            }

             else if ( moneti >= 02) {
                br += 1;
                moneti -= 02;
            }

              else if ( moneti >= 01) {
                br += 1;
                moneti -= 01;
                break;
            }
      }

        cout << (br) << endl;


    return 0;
}



