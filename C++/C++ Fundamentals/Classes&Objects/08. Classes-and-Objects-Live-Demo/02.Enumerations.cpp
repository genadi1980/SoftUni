#include<iostream>
using namespace std;

int main() {
    enum planets
    {
        earth = 3,
        mars,
        jupiter,
        saturn,
        uranus,
        neptune
        
    };

    // We can do math on this enum, because it is just const int underneath
    cout << "earth (" << earth << ") is "
        << uranus - earth << " planets away from "
        << "uranus (" << uranus << ")" << endl;

    enum class Planets
    {
        earth = 3,
        mars,
        jupiter,
        saturn,
        uranus,
        neptune
        
    };

    return 0;
}
