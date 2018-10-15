#include <iostream>
#include <string>

using namespace std;

int main()
{
        string input;
        cin >> input;

        int MAX = INT_MIN;
        int MIN = INT_MAX;

        while (input != "END") {
            int number = stoi(input);

            if(number > MAX) {
                MAX = number;
            }

            if (number < MIN) {
                MIN = number;
            }

            cin >> input;
        }

        cout << "Max number: "<< MAX << endl;
        cout << "Min number: "<< MIN << endl;

        return 0;

}
