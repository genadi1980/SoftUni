
#include <iostream>
#include <map>
#include <string>


using namespace std;
int main(void)
{
    string city;
    double sales, tradeCom;
    cin >> city >> sales;
    tradeCom = -1;

    if (city == "Sofia") {

        if ( sales >= 0 && sales <= 500) tradeCom = 0.05;
        else if (500 < sales && sales <= 1000) tradeCom = 0.07;
        else if (1000 < sales && sales <= 10000) tradeCom = 0.08;
        else if (sales > 10000) tradeCom = 0.12;

    }

    else if (city == "Varna") {

        if( sales >= 0 && sales  <= 500) tradeCom = 0.045;
        else if (500 < sales && sales <= 1000) tradeCom = 0.075;
        else if (1000 < sales && sales <= 10000) tradeCom = 0.1;
        else if (sales > 10000) tradeCom = 0.13;

    }
    else if (city == "Plovdiv") {

        if( sales >= 0 && sales  <= 500) tradeCom = 0.055;
        else if (500 < sales && sales <= 1000) tradeCom = 0.08;
        else if (1000 < sales && sales <= 10000) tradeCom = 0.12;
        else if (sales > 10000) tradeCom = 0.145;

    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if ( tradeCom >= 0) {cout << tradeCom * sales << endl;}
    else cout << "error" << endl;

    return 0;
}
