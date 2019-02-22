// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
	int a[20][100];
	int* p[10];
	int* q[10];

	cout << "n, k = ";
	int n, k;

	cin >> n >> k;
	if (!cin)
	{
		cout << "Error! \n";
		return 0;
	}

	// въвеждане на матрица
	int i, j;

	for ( i = 0; i <= n-1; ++i)
		for (j = 0; j <= k - 1; ++j)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> *(*(a + i) + j);
		}
	//извеждане на матрица

	for (i = 0; i <= n - 1; ++i)
		for (j = 0; j <= k - 1; ++j)
		{
			cout << setw(10) << *(*(a+i) + j);
			cout << '\n';
		}

	cout << "\n\n New matrix even members \n";
	// конструиране
	int m = -1;
	for (i = 0; i <= n - 1; i = i + 2)
	{
		m++;
		*(p + m) = *(a + i);
	}

	//извеждане на р с увеличение на елементите му с 1
	for (i = 0; i <= m; ++i)
	{
		for(j=0;j<=k-1;++j)
			cout << setw(10) << *(*(p + i) + j) + 1;
			cout << '\n';
	}
	cout << "\n\n New matrix odd members \n";
	//конструиране
	int l = -1;
	for (i = 1; i <= n - 1; i = i + 2)
	{
		l++;
		q[l] = a[i]; // или *(q+l) = *(a+i);
	}

	//извеждане на q с увеличение на елементите му с 2
	for (i = 0; i <= l; i++)
	{
		for (j = 0; j <= k - 1; j++)
		{
			cout << setw(10) << *(*(q + i) + j) + 2;
			cout << '\n';
		}
		//извеждане на сумата на p и q, ако n е четно

		if(n%2 == 0)
			for (i = 0; i <= m; ++i)
			{
				for (j = 0; j <= k - 1; ++j)
				{
					cout << setw(10) << *(*(p + i) + j) + *(*(q+i)+j);
					cout << '\n';
				}
			}
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
