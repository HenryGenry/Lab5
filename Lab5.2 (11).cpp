// task5.2.11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a[6] = { 1, 2, 2, 3, 3, 3 };
	int count = 0;
	bool b;
	for (int i = 0; i < 6; i++) {
		b = true;
		for (int j = i + 1; j < 6; j++) {
			if (a[i] = a[j]) b = false;
		}
		if (b) count++;
	}
	cout << count << endl;
	system("pause");
	return 0;
}

