#include<iostream>
#include<iomanip>
#include<string>


using namespace std;

int main() {

    double m, mm, cm, mi, in, km, ft, yd;
    double inputNumber, outNumber, metric;
    string inMetric, outMetric;;

    cin >> inputNumber >> inMetric >> outMetric;

    m = 1.0;
    mm = 1000.0;
    cm = 100.0;
    mi = 0.000621371192;
    in = 39.3700787;
    km = 0.001;
    ft = 3.2808399;
    yd = 1.0936133;


    //Input Logic
    if(inMetric == "m") {
        inputNumber = inputNumber * m;
    }
    else if ( inMetric == "mm") {
        inputNumber = inputNumber / mm;
    }
    else if ( inMetric == "cm") {
        inputNumber = inputNumber / cm;
    }
    else if ( inMetric == "in") {
        inputNumber = inputNumber / in;
    }
    else if ( inMetric == "mi") {
        inputNumber = inputNumber /  mi;
    }
    else if (inMetric == "km") {
        inputNumber = inputNumber / km;
    }
    else if ( inMetric == "ft") {
        inputNumber = inputNumber / ft;
    }
    else if ( inMetric == "yd") {
        inputNumber = inputNumber / yd;
    }



    ////////////output Logic
    if(outMetric == "m") {
        outNumber = inputNumber;
    }
    else if (outMetric == "mm") {
        outNumber = inputNumber * mm;
    }
    else if (outMetric == "cm") {
        outNumber = inputNumber * cm;
    }
    else if (outMetric == "in") {
        outNumber = inputNumber * in;
    }
    else if (outMetric == "mi") {
        outNumber = inputNumber * mi;
    }
    else if (outMetric == "km") {
        outNumber = inputNumber * km;
    }
    else if(outMetric == "ft") {
        outNumber = inputNumber * ft;
    }
    else if (outMetric == "yd") {
        outNumber = inputNumber * yd;
    }


    cout.setf(ios::fixed);
    cout.precision(8);

    cout << outNumber << endl;

    return 0;
}
