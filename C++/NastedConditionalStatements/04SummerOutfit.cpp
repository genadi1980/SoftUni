#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <cmath>

using namespace std;

int main() {

    int degree;
    string dayTime;
    string Outfit;
    string Shoes;

    cin >> degree >> dayTime;

    if (degree >= 10 && degree <= 18) {
        if (dayTime == "Morning") {
            Outfit = "Sweatshirt";
            Shoes = "Sneakers";
        }
        else if (dayTime == "Afternoon") {
            Outfit = "Shirt";
            Shoes = "Moccasins";

        }
        else if (dayTime == "Evening") {
            Outfit = "Shirt";
            Shoes = "Moccasins";

        }
    }
    else if (degree > 18 && degree <= 24) {
        if (dayTime == "Morning") {
            Outfit = "Shirt";
            Shoes = "Moccasins";

        }
        else if (dayTime == "Afternoon") {
            Outfit = "T-Shirt";
            Shoes = "Sandals";

        }
        else if (dayTime == "Evening") {
            Outfit = "Shirt";
            Shoes = "Moccasins";

        }
    }
    else if (degree >= 25) {
        if (dayTime == "Morning"){
            Outfit = "T-Shirt";
            Shoes = "Sandals";

        }
        else if (dayTime == "Afternoon") {
            Outfit = "Swim Suit";
            Shoes = "Barefoot";

        }
        else if (dayTime == "Evening") {
            Outfit = "Shirt";
            Shoes = "Moccasins";

        }

    }

    cout << "It's "<< degree <<" degrees, get your " << Outfit << " and " << Shoes << "." << endl;

    return 0;
}
