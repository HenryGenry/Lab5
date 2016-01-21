// task5.2.8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void reverse(int a[], size_t n)
{
	for (size_t i = 1; i < n; i += 2)
	{
		int tmp = a[i];
		a[i] = a[i - 1];
		a[i - 1] = tmp;
		cout << a[i - 1] << " " << a[i] << " ";
	//	if (n % 2 == 0) cout << a[i - 1] << " " << a[i] << " ";
		}
	if (n % 2 != 0) cout << a[n - 1]	;
	}



int _tmain(int argc, _TCHAR* argv[])
{
	int a[5] = { 1, 2, 3, 4, 5 };
	reverse(a, 5);
	system("pause");
	return 0;
}

