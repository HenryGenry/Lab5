// task5.2.10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int max = a[0];
	for (int i = 0; i < 5; i++) {
		if (a[i] > max) max = a[i];
	}
	cout << max << endl;
	system("pause");
	return 0;
}

