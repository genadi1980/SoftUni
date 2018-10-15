
#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <cmath>



using namespace std;
int main() {

    string year;
    // p - ���� ��������
    // h - ���� ���� � ����� ����� �� ������ �� ������ ����.
    // ������ ������� �� 48 � ��������
    int p, h, weekends = 48;
    double saturdayGames, holidays,totalGames;
    cin >> year >> p >> h;

    saturdayGames = (weekends - h) * 3/4.0;

    //��������� ���
    holidays = p * 2/3.0;

    totalGames = saturdayGames + h + holidays;

    if(year == "leap") {
        totalGames = totalGames + totalGames*0.15;
    }

    totalGames = floor(totalGames);

    cout << totalGames << endl;



    return 0;
}
