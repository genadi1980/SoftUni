
#include<iostream>
#include<iomanip>
#include<iomanip>

using namespace std;

int main() {

   int badGrade = 0, counterBadGrade = 0, numberOfTasks = 0;
   int grade;
   double avarageGrade = 0, sum = 0;
   string input, lastProblem;

   cin >> badGrade;
   cin.ignore();
   getline(cin, input);
   cin >> grade;

   while(true) {
        cin.ignore();
        if (grade <= 4) {
            counterBadGrade ++;
        }
        if (counterBadGrade == badGrade) break;

        sum += grade;
        numberOfTasks++;
        lastProblem = input;



        getline(cin, input);

        if(input != "Enough"){
            lastProblem = input;
        }

        if(input == "Enough") break;

        cin >> grade;

   }

    avarageGrade =  sum / numberOfTasks;
    if(counterBadGrade < badGrade) {
    cout << fixed << setprecision(2) << "Average score: "<< avarageGrade << endl;
    cout << "Number of problems: " << numberOfTasks << endl;
    cout << "Last problem: " << lastProblem << endl;
    }
    else {
        cout << "You need a break, " << badGrade << " poor grades." << endl;
    }
    return 0;
}


