// task5.2.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void reverse(int a[], size_t n)
{
	for (size_t i = 0; i < n / 2; i++)
	{
		int tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int a[7] = { 1, 2, 3, 4, 5, 6, 7 };
	reverse(a, 7);
	for (int i = 0; i < 7; i++) {
		cout << a[i] << endl;
	}
	system("pause");
	return 0;
}