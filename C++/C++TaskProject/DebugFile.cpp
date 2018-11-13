#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>


using namespace std;

int main() {
        double balloons = 0.1, flower = 1.5, candles = 0.5, ribbon = 2, spendMoney = 0.0, moneyLeft = 0.0;
        double budget = 0.0, sum = 0.0, sumBall = 0.0, sumFl = 0.0, sumCan = 0.0, sumRibb=0.0;
        int number = 0, ball = 0, can = 0, fl = 0, ribb = 0;
        bool isBudget = false;

        //entrance
        string command;
        cin >> budget;
        cin.ignore();
        getline(cin, command);
        cin >> number;


        while(command != "stop") {
                double leftBudget = 0.0;
                if(command == "balloons"){
                    ball++;
                    //sumBall += number * balloons;
                    sum += number * balloons;

                }

                if(command=="flowers") {
                    fl++;
                    sum = number * flower;

                }

                if(command == "ribbon") {
                    ribb++;
                    sum = number * ribbon;
                }

                if (command == "candles") {
                    can++;
                    sum = number * candles;
                }

                budget -= sum;
                spendMoney = sum;
                moneyLeft = budget;

                cin.ignore();
                getline(cin, command);
                cin >> number;

        }

        //exit
        cout.setf(ios::fixed);
        cout.precision(2);

        if(isBudget) {
            cout << "All money is spent!" << endl;
        } else {
            cout << "Spend money: " << spendMoney << endl;
            cout << "Money left: "  << moneyLeft << endl;
        }

        cout << "Purchased decoration is " << ball <<" balloons, " << ribb << " m ribbon, "
                    << fl << " flowers and " << can <<" candles." << endl;


        return 0;
}


