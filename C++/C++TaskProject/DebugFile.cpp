#include <iostream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

	int sum = 0;
    for(unsigned int i = 0; i < line.size(); ++i)
    {
        if ((line[i] >= 'a' && line[i]<='z') || (line[i] >= 'A' && line[i]<='Z'))
        {
            line[i] = '\0';
		}

		if (line[i] >= '0'&& line[i] <= '9')
		{
			sum += line[i] - '0';
		}
    }
    cout << sum << endl;
    return 0;
}
