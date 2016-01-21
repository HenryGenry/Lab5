// task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void PrimeFactors(int n)
{
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		int j = i - 1;
		while (j > 1)
		{
			if (i   % j == 0)
				break;
			else
				j--;
		}
		if (j == 1)
		{
			if (n % i == 0)
			{
				cout << "\n" << i;
			}
		}

	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	PrimeFactors(n);
	cout << endl;
	system("pause");
	return 0;
}

