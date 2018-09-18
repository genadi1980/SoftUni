#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>


using namespace std;

int main() {

    double income, avarageScore, minSalary, scolarship, socialScolarship, excelScolarship;

    cin >> income >> avarageScore >> minSalary;

    socialScolarship = minSalary * 35 /100.0;
    excelScolarship = avarageScore * 25;


     if (avarageScore >= 5.5){
        scolarship = max(socialScolarship, excelScolarship);
        scolarship = floor(scolarship);
            if (socialScolarship >= excelScolarship || income >= minSalary) {
                cout << setw(0) << "You get a Social scholarship " << scolarship << " BGN" << endl;
            }
            else {
                cout << setw(0)<< "You get a scholarship for excellent results " <<scolarship << " BGN" << endl;
            }
    }

    else if ( income < minSalary  && avarageScore >= 4.5) {
    scolarship = floor(socialScolarship);
    cout << setw(0) << "You get a Social scholarship " << scolarship << " BGN" << endl;
    }

    else if (income > minSalary){
        cout << "You cannot get a scholarship!" << endl;
    }


    return 0;
}
