#include<iostream>

using namespace std;

int main(){
    double grades = 1, failedGrades;
    string name;
    cin >> name;
    double sum = 0;

    while(grades <= 12){
        double grade;
        cin >> grade;

        if (grade >= 4.00) {
            sum += grade;
            grades++;
        }
        else if(grade < 4.00) {
            failedGrades++;
            if (failedGrades == 2){
                cout << name << " has been excluded at " << grades << " grade" << endl;
                return 0;
            }
        }

    }
    double average = sum / 12;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << name << " graduated. Average grade: " << average << endl;

    return 0;
}
