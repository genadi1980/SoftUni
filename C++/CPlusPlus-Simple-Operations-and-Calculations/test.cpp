// setfill example
#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setfill, std::setw

using namespace std;

int main () {
  cout << setfill ('0') << setw (2);
  cout << 7 << endl;
  return 0;
}

